# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# NO CHECKED-IN PROTOBUF GENCODE
# source: astarteplatform/msghub/astarte_message.proto
# Protobuf Python Version: 5.29.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import runtime_version as _runtime_version
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
_runtime_version.ValidateProtobufRuntimeVersion(
    _runtime_version.Domain.PUBLIC,
    5,
    29,
    0,
    '',
    'astarteplatform/msghub/astarte_message.proto'
)
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2
from astarteplatform.msghub import astarte_data_pb2 as astarteplatform_dot_msghub_dot_astarte__data__pb2
from astarteplatform.msghub import message_hub_error_pb2 as astarteplatform_dot_msghub_dot_message__hub__error__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n,astarteplatform/msghub/astarte_message.proto\x12\x16\x61starteplatform.msghub\x1a\x1fgoogle/protobuf/timestamp.proto\x1a)astarteplatform/msghub/astarte_data.proto\x1a.astarteplatform/msghub/message_hub_error.proto\"\x8f\x01\n\x0fMessageHubEvent\x12\x39\n\x07message\x18\x01 \x01(\x0b\x32&.astarteplatform.msghub.AstarteMessageH\x00\x12\x38\n\x05\x65rror\x18\x02 \x01(\x0b\x32\'.astarteplatform.msghub.MessageHubErrorH\x00\x42\x07\n\x05\x65vent\"\xf9\x02\n\x0e\x41starteMessage\x12\x16\n\x0einterface_name\x18\x01 \x01(\t\x12\x0c\n\x04path\x18\x02 \x01(\t\x12\x32\n\ttimestamp\x18\x03 \x01(\x0b\x32\x1a.google.protobuf.TimestampH\x01\x88\x01\x01\x12T\n\x15\x64\x61tastream_individual\x18\x04 \x01(\x0b\x32\x33.astarteplatform.msghub.AstarteDatastreamIndividualH\x00\x12L\n\x11\x64\x61tastream_object\x18\x05 \x01(\x0b\x32/.astarteplatform.msghub.AstarteDatastreamObjectH\x00\x12P\n\x13property_individual\x18\x06 \x01(\x0b\x32\x31.astarteplatform.msghub.AstartePropertyIndividualH\x00\x42\t\n\x07payloadB\x0c\n\n_timestampb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'astarteplatform.msghub.astarte_message_pb2', _globals)
if not _descriptor._USE_C_DESCRIPTORS:
  DESCRIPTOR._loaded_options = None
  _globals['_MESSAGEHUBEVENT']._serialized_start=197
  _globals['_MESSAGEHUBEVENT']._serialized_end=340
  _globals['_ASTARTEMESSAGE']._serialized_start=343
  _globals['_ASTARTEMESSAGE']._serialized_end=720
# @@protoc_insertion_point(module_scope)
