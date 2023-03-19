/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.16) *
 *******************************************************************/
#ifndef __wrappedpulseTYPES_H_
#define __wrappedpulseTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int32_t (*iFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef void* (*pFipp_t)(int32_t, void*, void*);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef int32_t (*iFppip_t)(void*, void*, int32_t, void*);
typedef int32_t (*iFpppV_t)(void*, void*, void*, ...);
typedef void* (*pFpipp_t)(void*, int32_t, void*, void*);
typedef void* (*pFpupp_t)(void*, uint32_t, void*, void*);
typedef void* (*pFpppp_t)(void*, void*, void*, void*);
typedef void* (*pFpiupp_t)(void*, int32_t, uint32_t, void*, void*);
typedef void* (*pFpippp_t)(void*, int32_t, void*, void*, void*);
typedef void* (*pFpuipp_t)(void*, uint32_t, int32_t, void*, void*);
typedef void* (*pFpuupp_t)(void*, uint32_t, uint32_t, void*, void*);
typedef void* (*pFpuppp_t)(void*, uint32_t, void*, void*, void*);
typedef void* (*pFppppp_t)(void*, void*, void*, void*, void*);
typedef int32_t (*iFppLpIi_t)(void*, void*, uintptr_t, void*, int64_t, int32_t);
typedef void* (*pFpiuCppp_t)(void*, int32_t, uint32_t, uint8_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(pa_mainloop_free, vFp_t) \
	GO(pa_threaded_mainloop_free, vFp_t) \
	GO(pa_signal_init, iFp_t) \
	GO(pa_mainloop_get_api, pFp_t) \
	GO(pa_threaded_mainloop_get_api, pFp_t) \
	GO(pa_signal_set_destroy, vFpp_t) \
	GO(pa_context_new, pFpp_t) \
	GO(pa_context_set_event_callback, vFppp_t) \
	GO(pa_context_set_state_callback, vFppp_t) \
	GO(pa_context_set_subscribe_callback, vFppp_t) \
	GO(pa_mainloop_set_poll_func, vFppp_t) \
	GO(pa_stream_set_buffer_attr_callback, vFppp_t) \
	GO(pa_stream_set_event_callback, vFppp_t) \
	GO(pa_stream_set_latency_update_callback, vFppp_t) \
	GO(pa_stream_set_moved_callback, vFppp_t) \
	GO(pa_stream_set_overflow_callback, vFppp_t) \
	GO(pa_stream_set_read_callback, vFppp_t) \
	GO(pa_stream_set_started_callback, vFppp_t) \
	GO(pa_stream_set_state_callback, vFppp_t) \
	GO(pa_stream_set_suspended_callback, vFppp_t) \
	GO(pa_stream_set_underflow_callback, vFppp_t) \
	GO(pa_stream_set_write_callback, vFppp_t) \
	GO(pa_signal_new, pFipp_t) \
	GO(pa_context_drain, pFppp_t) \
	GO(pa_context_exit_daemon, pFppp_t) \
	GO(pa_context_get_card_info_list, pFppp_t) \
	GO(pa_context_get_client_info_list, pFppp_t) \
	GO(pa_context_get_module_info_list, pFppp_t) \
	GO(pa_context_get_server_info, pFppp_t) \
	GO(pa_context_get_sink_info_list, pFppp_t) \
	GO(pa_context_get_sink_input_info_list, pFppp_t) \
	GO(pa_context_get_source_info_list, pFppp_t) \
	GO(pa_context_get_source_output_info_list, pFppp_t) \
	GO(pa_context_new_with_proplist, pFppp_t) \
	GO(pa_ext_device_restore_read_formats_all, pFppp_t) \
	GO(pa_ext_device_restore_set_subscribe_cb, pFppp_t) \
	GO(pa_stream_drain, pFppp_t) \
	GO(pa_stream_flush, pFppp_t) \
	GO(pa_stream_prebuf, pFppp_t) \
	GO(pa_stream_trigger, pFppp_t) \
	GO(pa_stream_update_timing_info, pFppp_t) \
	GO(pa_context_connect, iFppip_t) \
	GO(pa_proplist_setf, iFpppV_t) \
	GO(pa_ext_device_restore_subscribe, pFpipp_t) \
	GO(pa_stream_cork, pFpipp_t) \
	GO(pa_context_get_card_info_by_index, pFpupp_t) \
	GO(pa_context_get_client_info, pFpupp_t) \
	GO(pa_context_get_sink_info_by_index, pFpupp_t) \
	GO(pa_context_get_sink_input_info, pFpupp_t) \
	GO(pa_context_get_source_info_by_index, pFpupp_t) \
	GO(pa_context_get_source_output_info, pFpupp_t) \
	GO(pa_context_subscribe, pFpupp_t) \
	GO(pa_context_unload_module, pFpupp_t) \
	GO(pa_stream_update_sample_rate, pFpupp_t) \
	GO(pa_context_get_sink_info_by_name, pFpppp_t) \
	GO(pa_context_get_source_info_by_name, pFpppp_t) \
	GO(pa_context_proplist_remove, pFpppp_t) \
	GO(pa_context_set_default_sink, pFpppp_t) \
	GO(pa_context_set_default_source, pFpppp_t) \
	GO(pa_context_set_name, pFpppp_t) \
	GO(pa_stream_proplist_remove, pFpppp_t) \
	GO(pa_stream_set_buffer_attr, pFpppp_t) \
	GO(pa_stream_set_name, pFpppp_t) \
	GO(pa_ext_device_restore_read_formats, pFpiupp_t) \
	GO(pa_context_proplist_update, pFpippp_t) \
	GO(pa_stream_proplist_update, pFpippp_t) \
	GO(pa_context_set_sink_input_mute, pFpuipp_t) \
	GO(pa_context_set_sink_mute_by_index, pFpuipp_t) \
	GO(pa_context_set_source_mute_by_index, pFpuipp_t) \
	GO(pa_context_move_sink_input_by_index, pFpuupp_t) \
	GO(pa_context_move_source_output_by_index, pFpuupp_t) \
	GO(pa_context_set_card_profile_by_index, pFpuppp_t) \
	GO(pa_context_set_sink_input_volume, pFpuppp_t) \
	GO(pa_context_set_sink_port_by_index, pFpuppp_t) \
	GO(pa_context_set_sink_volume_by_index, pFpuppp_t) \
	GO(pa_context_set_source_port_by_index, pFpuppp_t) \
	GO(pa_context_set_source_volume_by_index, pFpuppp_t) \
	GO(pa_context_load_module, pFppppp_t) \
	GO(pa_context_set_sink_port_by_name, pFppppp_t) \
	GO(pa_context_set_source_volume_by_name, pFppppp_t) \
	GO(pa_stream_write, iFppLpIi_t) \
	GO(pa_ext_device_restore_save_formats, pFpiuCppp_t)

#endif // __wrappedpulseTYPES_H_
