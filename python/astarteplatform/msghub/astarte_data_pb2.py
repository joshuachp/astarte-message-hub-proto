# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# NO CHECKED-IN PROTOBUF GENCODE
# source: astarteplatform/msghub/astarte_data.proto
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
    'astarteplatform/msghub/astarte_data.proto'
)
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n)astarteplatform/msghub/astarte_data.proto\x12\x16\x61starteplatform.msghub\x1a\x1fgoogle/protobuf/timestamp.proto\"$\n\x12\x41starteDoubleArray\x12\x0e\n\x06values\x18\x01 \x03(\x01\"%\n\x13\x41starteIntegerArray\x12\x0e\n\x06values\x18\x01 \x03(\x05\"%\n\x13\x41starteBooleanArray\x12\x0e\n\x06values\x18\x01 \x03(\x08\")\n\x17\x41starteLongIntegerArray\x12\x0e\n\x06values\x18\x01 \x03(\x03\"$\n\x12\x41starteStringArray\x12\x0e\n\x06values\x18\x01 \x03(\t\"(\n\x16\x41starteBinaryBlobArray\x12\x0e\n\x06values\x18\x01 \x03(\x0c\"B\n\x14\x41starteDateTimeArray\x12*\n\x06values\x18\x01 \x03(\x0b\x32\x1a.google.protobuf.Timestamp\"\xc0\x05\n\x0b\x41starteData\x12\x10\n\x06\x64ouble\x18\x01 \x01(\x01H\x00\x12\x11\n\x07integer\x18\x02 \x01(\x05H\x00\x12\x11\n\x07\x62oolean\x18\x03 \x01(\x08H\x00\x12\x16\n\x0clong_integer\x18\x04 \x01(\x03H\x00\x12\x10\n\x06string\x18\x05 \x01(\tH\x00\x12\x15\n\x0b\x62inary_blob\x18\x06 \x01(\x0cH\x00\x12/\n\tdate_time\x18\x07 \x01(\x0b\x32\x1a.google.protobuf.TimestampH\x00\x12\x42\n\x0c\x64ouble_array\x18\x08 \x01(\x0b\x32*.astarteplatform.msghub.AstarteDoubleArrayH\x00\x12\x44\n\rinteger_array\x18\t \x01(\x0b\x32+.astarteplatform.msghub.AstarteIntegerArrayH\x00\x12\x44\n\rboolean_array\x18\n \x01(\x0b\x32+.astarteplatform.msghub.AstarteBooleanArrayH\x00\x12M\n\x12long_integer_array\x18\x0b \x01(\x0b\x32/.astarteplatform.msghub.AstarteLongIntegerArrayH\x00\x12\x42\n\x0cstring_array\x18\x0c \x01(\x0b\x32*.astarteplatform.msghub.AstarteStringArrayH\x00\x12K\n\x11\x62inary_blob_array\x18\r \x01(\x0b\x32..astarteplatform.msghub.AstarteBinaryBlobArrayH\x00\x12G\n\x0f\x64\x61te_time_array\x18\x0e \x01(\x0b\x32,.astarteplatform.msghub.AstarteDateTimeArrayH\x00\x42\x0e\n\x0c\x61starte_data\"Q\n\x1c\x41starteDatastreamInidividual\x12\x31\n\x04\x64\x61ta\x18\x01 \x01(\x0b\x32#.astarteplatform.msghub.AstarteData\"\xb4\x01\n\x17\x41starteDatastreamObject\x12G\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x39.astarteplatform.msghub.AstarteDatastreamObject.DataEntry\x1aP\n\tDataEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x32\n\x05value\x18\x02 \x01(\x0b\x32#.astarteplatform.msghub.AstarteData:\x02\x38\x01\"\\\n\x19\x41startePropertyIndividual\x12\x36\n\x04\x64\x61ta\x18\x01 \x01(\x0b\x32#.astarteplatform.msghub.AstarteDataH\x00\x88\x01\x01\x42\x07\n\x05_datab\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'astarteplatform.msghub.astarte_data_pb2', _globals)
if not _descriptor._USE_C_DESCRIPTORS:
  DESCRIPTOR._loaded_options = None
  _globals['_ASTARTEDATASTREAMOBJECT_DATAENTRY']._loaded_options = None
  _globals['_ASTARTEDATASTREAMOBJECT_DATAENTRY']._serialized_options = b'8\001'
  _globals['_ASTARTEDOUBLEARRAY']._serialized_start=102
  _globals['_ASTARTEDOUBLEARRAY']._serialized_end=138
  _globals['_ASTARTEINTEGERARRAY']._serialized_start=140
  _globals['_ASTARTEINTEGERARRAY']._serialized_end=177
  _globals['_ASTARTEBOOLEANARRAY']._serialized_start=179
  _globals['_ASTARTEBOOLEANARRAY']._serialized_end=216
  _globals['_ASTARTELONGINTEGERARRAY']._serialized_start=218
  _globals['_ASTARTELONGINTEGERARRAY']._serialized_end=259
  _globals['_ASTARTESTRINGARRAY']._serialized_start=261
  _globals['_ASTARTESTRINGARRAY']._serialized_end=297
  _globals['_ASTARTEBINARYBLOBARRAY']._serialized_start=299
  _globals['_ASTARTEBINARYBLOBARRAY']._serialized_end=339
  _globals['_ASTARTEDATETIMEARRAY']._serialized_start=341
  _globals['_ASTARTEDATETIMEARRAY']._serialized_end=407
  _globals['_ASTARTEDATA']._serialized_start=410
  _globals['_ASTARTEDATA']._serialized_end=1114
  _globals['_ASTARTEDATASTREAMINIDIVIDUAL']._serialized_start=1116
  _globals['_ASTARTEDATASTREAMINIDIVIDUAL']._serialized_end=1197
  _globals['_ASTARTEDATASTREAMOBJECT']._serialized_start=1200
  _globals['_ASTARTEDATASTREAMOBJECT']._serialized_end=1380
  _globals['_ASTARTEDATASTREAMOBJECT_DATAENTRY']._serialized_start=1300
  _globals['_ASTARTEDATASTREAMOBJECT_DATAENTRY']._serialized_end=1380
  _globals['_ASTARTEPROPERTYINDIVIDUAL']._serialized_start=1382
  _globals['_ASTARTEPROPERTYINDIVIDUAL']._serialized_end=1474
# @@protoc_insertion_point(module_scope)
