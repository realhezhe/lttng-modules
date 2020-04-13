/* SPDX-License-Identifier: GPL-2.0-only */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM napi

#if !defined(LTTNG_TRACE_NAPI_H) || defined(TRACE_HEADER_MULTI_READ)
#define LTTNG_TRACE_NAPI_H

#include <probes/lttng-tracepoint-event.h>
#include <linux/netdevice.h>
#include <linux/ftrace.h>

#define NO_DEV "(no_device)"

LTTNG_TRACEPOINT_EVENT(napi_poll,

	TP_PROTO(struct napi_struct *napi, int work, int budget),

	TP_ARGS(napi, work, budget),

	TP_FIELDS(
		ctf_integer_hex(struct napi_struct *, napi, napi)
		ctf_string(dev_name, napi->dev ? napi->dev->name : NO_DEV)
		ctf_integer(int, work, work)
		ctf_integer(int, budget, budget)
	)
)

#undef NO_DEV

#endif /* LTTNG_TRACE_NAPI_H */

/* This part must be outside protection */
#include <probes/define_trace.h>
