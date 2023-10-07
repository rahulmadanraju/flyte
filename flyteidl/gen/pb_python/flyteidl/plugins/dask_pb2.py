# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: flyteidl/plugins/dask.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from flyteidl.core import tasks_pb2 as flyteidl_dot_core_dot_tasks__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1b\x66lyteidl/plugins/dask.proto\x12\x10\x66lyteidl.plugins\x1a\x19\x66lyteidl/core/tasks.proto\"\x85\x01\n\x07\x44\x61skJob\x12=\n\tscheduler\x18\x01 \x01(\x0b\x32\x1f.flyteidl.plugins.DaskSchedulerR\tscheduler\x12;\n\x07workers\x18\x02 \x01(\x0b\x32!.flyteidl.plugins.DaskWorkerGroupR\x07workers\"]\n\rDaskScheduler\x12\x14\n\x05image\x18\x01 \x01(\tR\x05image\x12\x36\n\tresources\x18\x02 \x01(\x0b\x32\x18.flyteidl.core.ResourcesR\tresources\"\x8b\x01\n\x0f\x44\x61skWorkerGroup\x12*\n\x11number_of_workers\x18\x01 \x01(\rR\x0fnumberOfWorkers\x12\x14\n\x05image\x18\x02 \x01(\tR\x05image\x12\x36\n\tresources\x18\x03 \x01(\x0b\x32\x18.flyteidl.core.ResourcesR\tresourcesB\xc1\x01\n\x14\x63om.flyteidl.pluginsB\tDaskProtoP\x01Z=github.com/flyteorg/flyte/flyteidl/gen/pb-go/flyteidl/plugins\xa2\x02\x03\x46PX\xaa\x02\x10\x46lyteidl.Plugins\xca\x02\x10\x46lyteidl\\Plugins\xe2\x02\x1c\x46lyteidl\\Plugins\\GPBMetadata\xea\x02\x11\x46lyteidl::Pluginsb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'flyteidl.plugins.dask_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\024com.flyteidl.pluginsB\tDaskProtoP\001Z=github.com/flyteorg/flyte/flyteidl/gen/pb-go/flyteidl/plugins\242\002\003FPX\252\002\020Flyteidl.Plugins\312\002\020Flyteidl\\Plugins\342\002\034Flyteidl\\Plugins\\GPBMetadata\352\002\021Flyteidl::Plugins'
  _globals['_DASKJOB']._serialized_start=77
  _globals['_DASKJOB']._serialized_end=210
  _globals['_DASKSCHEDULER']._serialized_start=212
  _globals['_DASKSCHEDULER']._serialized_end=305
  _globals['_DASKWORKERGROUP']._serialized_start=308
  _globals['_DASKWORKERGROUP']._serialized_end=447
# @@protoc_insertion_point(module_scope)
