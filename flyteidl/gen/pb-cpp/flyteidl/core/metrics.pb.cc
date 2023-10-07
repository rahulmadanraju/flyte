// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/core/metrics.proto

#include "flyteidl/core/metrics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2fidentifier_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_WorkflowExecutionIdentifier_flyteidl_2fcore_2fidentifier_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2fidentifier_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_NodeExecutionIdentifier_flyteidl_2fcore_2fidentifier_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2fidentifier_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_TaskExecutionIdentifier_flyteidl_2fcore_2fidentifier_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2fmetrics_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_Span_flyteidl_2fcore_2fmetrics_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace flyteidl {
namespace core {
class SpanDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Span> _instance;
  const ::flyteidl::core::WorkflowExecutionIdentifier* workflow_id_;
  const ::flyteidl::core::NodeExecutionIdentifier* node_id_;
  const ::flyteidl::core::TaskExecutionIdentifier* task_id_;
  ::google::protobuf::internal::ArenaStringPtr operation_id_;
} _Span_default_instance_;
}  // namespace core
}  // namespace flyteidl
static void InitDefaultsSpan_flyteidl_2fcore_2fmetrics_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::core::_Span_default_instance_;
    new (ptr) ::flyteidl::core::Span();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::core::Span::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<4> scc_info_Span_flyteidl_2fcore_2fmetrics_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsSpan_flyteidl_2fcore_2fmetrics_2eproto}, {
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,
      &scc_info_WorkflowExecutionIdentifier_flyteidl_2fcore_2fidentifier_2eproto.base,
      &scc_info_NodeExecutionIdentifier_flyteidl_2fcore_2fidentifier_2eproto.base,
      &scc_info_TaskExecutionIdentifier_flyteidl_2fcore_2fidentifier_2eproto.base,}};

void InitDefaults_flyteidl_2fcore_2fmetrics_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Span_flyteidl_2fcore_2fmetrics_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_flyteidl_2fcore_2fmetrics_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_flyteidl_2fcore_2fmetrics_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_flyteidl_2fcore_2fmetrics_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_flyteidl_2fcore_2fmetrics_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::Span, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::Span, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::Span, start_time_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::Span, end_time_),
  offsetof(::flyteidl::core::SpanDefaultTypeInternal, workflow_id_),
  offsetof(::flyteidl::core::SpanDefaultTypeInternal, node_id_),
  offsetof(::flyteidl::core::SpanDefaultTypeInternal, task_id_),
  offsetof(::flyteidl::core::SpanDefaultTypeInternal, operation_id_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::Span, spans_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::Span, id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::flyteidl::core::Span)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::core::_Span_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_flyteidl_2fcore_2fmetrics_2eproto = {
  {}, AddDescriptors_flyteidl_2fcore_2fmetrics_2eproto, "flyteidl/core/metrics.proto", schemas,
  file_default_instances, TableStruct_flyteidl_2fcore_2fmetrics_2eproto::offsets,
  file_level_metadata_flyteidl_2fcore_2fmetrics_2eproto, 1, file_level_enum_descriptors_flyteidl_2fcore_2fmetrics_2eproto, file_level_service_descriptors_flyteidl_2fcore_2fmetrics_2eproto,
};

const char descriptor_table_protodef_flyteidl_2fcore_2fmetrics_2eproto[] =
  "\n\033flyteidl/core/metrics.proto\022\rflyteidl."
  "core\032\036flyteidl/core/identifier.proto\032\037go"
  "ogle/protobuf/timestamp.proto\"\337\002\n\004Span\022."
  "\n\nstart_time\030\001 \001(\0132\032.google.protobuf.Tim"
  "estamp\022,\n\010end_time\030\002 \001(\0132\032.google.protob"
  "uf.Timestamp\022A\n\013workflow_id\030\003 \001(\0132*.flyt"
  "eidl.core.WorkflowExecutionIdentifierH\000\022"
  "9\n\007node_id\030\004 \001(\0132&.flyteidl.core.NodeExe"
  "cutionIdentifierH\000\0229\n\007task_id\030\005 \001(\0132&.fl"
  "yteidl.core.TaskExecutionIdentifierH\000\022\026\n"
  "\014operation_id\030\006 \001(\tH\000\022\"\n\005spans\030\007 \003(\0132\023.f"
  "lyteidl.core.SpanB\004\n\002idB<Z:github.com/fl"
  "yteorg/flyte/flyteidl/gen/pb-go/flyteidl"
  "/coreb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_flyteidl_2fcore_2fmetrics_2eproto = {
  false, InitDefaults_flyteidl_2fcore_2fmetrics_2eproto, 
  descriptor_table_protodef_flyteidl_2fcore_2fmetrics_2eproto,
  "flyteidl/core/metrics.proto", &assign_descriptors_table_flyteidl_2fcore_2fmetrics_2eproto, 533,
};

void AddDescriptors_flyteidl_2fcore_2fmetrics_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[2] =
  {
    ::AddDescriptors_flyteidl_2fcore_2fidentifier_2eproto,
    ::AddDescriptors_google_2fprotobuf_2ftimestamp_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_flyteidl_2fcore_2fmetrics_2eproto, deps, 2);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_flyteidl_2fcore_2fmetrics_2eproto = []() { AddDescriptors_flyteidl_2fcore_2fmetrics_2eproto(); return true; }();
namespace flyteidl {
namespace core {

// ===================================================================

void Span::InitAsDefaultInstance() {
  ::flyteidl::core::_Span_default_instance_._instance.get_mutable()->start_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  ::flyteidl::core::_Span_default_instance_._instance.get_mutable()->end_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  ::flyteidl::core::_Span_default_instance_.workflow_id_ = const_cast< ::flyteidl::core::WorkflowExecutionIdentifier*>(
      ::flyteidl::core::WorkflowExecutionIdentifier::internal_default_instance());
  ::flyteidl::core::_Span_default_instance_.node_id_ = const_cast< ::flyteidl::core::NodeExecutionIdentifier*>(
      ::flyteidl::core::NodeExecutionIdentifier::internal_default_instance());
  ::flyteidl::core::_Span_default_instance_.task_id_ = const_cast< ::flyteidl::core::TaskExecutionIdentifier*>(
      ::flyteidl::core::TaskExecutionIdentifier::internal_default_instance());
  ::flyteidl::core::_Span_default_instance_.operation_id_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
class Span::HasBitSetters {
 public:
  static const ::google::protobuf::Timestamp& start_time(const Span* msg);
  static const ::google::protobuf::Timestamp& end_time(const Span* msg);
  static const ::flyteidl::core::WorkflowExecutionIdentifier& workflow_id(const Span* msg);
  static const ::flyteidl::core::NodeExecutionIdentifier& node_id(const Span* msg);
  static const ::flyteidl::core::TaskExecutionIdentifier& task_id(const Span* msg);
};

const ::google::protobuf::Timestamp&
Span::HasBitSetters::start_time(const Span* msg) {
  return *msg->start_time_;
}
const ::google::protobuf::Timestamp&
Span::HasBitSetters::end_time(const Span* msg) {
  return *msg->end_time_;
}
const ::flyteidl::core::WorkflowExecutionIdentifier&
Span::HasBitSetters::workflow_id(const Span* msg) {
  return *msg->id_.workflow_id_;
}
const ::flyteidl::core::NodeExecutionIdentifier&
Span::HasBitSetters::node_id(const Span* msg) {
  return *msg->id_.node_id_;
}
const ::flyteidl::core::TaskExecutionIdentifier&
Span::HasBitSetters::task_id(const Span* msg) {
  return *msg->id_.task_id_;
}
void Span::clear_start_time() {
  if (GetArenaNoVirtual() == nullptr && start_time_ != nullptr) {
    delete start_time_;
  }
  start_time_ = nullptr;
}
void Span::clear_end_time() {
  if (GetArenaNoVirtual() == nullptr && end_time_ != nullptr) {
    delete end_time_;
  }
  end_time_ = nullptr;
}
void Span::set_allocated_workflow_id(::flyteidl::core::WorkflowExecutionIdentifier* workflow_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_id();
  if (workflow_id) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      workflow_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, workflow_id, submessage_arena);
    }
    set_has_workflow_id();
    id_.workflow_id_ = workflow_id;
  }
  // @@protoc_insertion_point(field_set_allocated:flyteidl.core.Span.workflow_id)
}
void Span::clear_workflow_id() {
  if (has_workflow_id()) {
    delete id_.workflow_id_;
    clear_has_id();
  }
}
void Span::set_allocated_node_id(::flyteidl::core::NodeExecutionIdentifier* node_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_id();
  if (node_id) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      node_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, node_id, submessage_arena);
    }
    set_has_node_id();
    id_.node_id_ = node_id;
  }
  // @@protoc_insertion_point(field_set_allocated:flyteidl.core.Span.node_id)
}
void Span::clear_node_id() {
  if (has_node_id()) {
    delete id_.node_id_;
    clear_has_id();
  }
}
void Span::set_allocated_task_id(::flyteidl::core::TaskExecutionIdentifier* task_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_id();
  if (task_id) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      task_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, task_id, submessage_arena);
    }
    set_has_task_id();
    id_.task_id_ = task_id;
  }
  // @@protoc_insertion_point(field_set_allocated:flyteidl.core.Span.task_id)
}
void Span::clear_task_id() {
  if (has_task_id()) {
    delete id_.task_id_;
    clear_has_id();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Span::kStartTimeFieldNumber;
const int Span::kEndTimeFieldNumber;
const int Span::kWorkflowIdFieldNumber;
const int Span::kNodeIdFieldNumber;
const int Span::kTaskIdFieldNumber;
const int Span::kOperationIdFieldNumber;
const int Span::kSpansFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Span::Span()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.core.Span)
}
Span::Span(const Span& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      spans_(from.spans_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_start_time()) {
    start_time_ = new ::google::protobuf::Timestamp(*from.start_time_);
  } else {
    start_time_ = nullptr;
  }
  if (from.has_end_time()) {
    end_time_ = new ::google::protobuf::Timestamp(*from.end_time_);
  } else {
    end_time_ = nullptr;
  }
  clear_has_id();
  switch (from.id_case()) {
    case kWorkflowId: {
      mutable_workflow_id()->::flyteidl::core::WorkflowExecutionIdentifier::MergeFrom(from.workflow_id());
      break;
    }
    case kNodeId: {
      mutable_node_id()->::flyteidl::core::NodeExecutionIdentifier::MergeFrom(from.node_id());
      break;
    }
    case kTaskId: {
      mutable_task_id()->::flyteidl::core::TaskExecutionIdentifier::MergeFrom(from.task_id());
      break;
    }
    case kOperationId: {
      set_operation_id(from.operation_id());
      break;
    }
    case ID_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:flyteidl.core.Span)
}

void Span::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Span_flyteidl_2fcore_2fmetrics_2eproto.base);
  ::memset(&start_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_time_) -
      reinterpret_cast<char*>(&start_time_)) + sizeof(end_time_));
  clear_has_id();
}

Span::~Span() {
  // @@protoc_insertion_point(destructor:flyteidl.core.Span)
  SharedDtor();
}

void Span::SharedDtor() {
  if (this != internal_default_instance()) delete start_time_;
  if (this != internal_default_instance()) delete end_time_;
  if (has_id()) {
    clear_id();
  }
}

void Span::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Span& Span::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Span_flyteidl_2fcore_2fmetrics_2eproto.base);
  return *internal_default_instance();
}


void Span::clear_id() {
// @@protoc_insertion_point(one_of_clear_start:flyteidl.core.Span)
  switch (id_case()) {
    case kWorkflowId: {
      delete id_.workflow_id_;
      break;
    }
    case kNodeId: {
      delete id_.node_id_;
      break;
    }
    case kTaskId: {
      delete id_.task_id_;
      break;
    }
    case kOperationId: {
      id_.operation_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case ID_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = ID_NOT_SET;
}


void Span::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.core.Span)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  spans_.Clear();
  if (GetArenaNoVirtual() == nullptr && start_time_ != nullptr) {
    delete start_time_;
  }
  start_time_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && end_time_ != nullptr) {
    delete end_time_;
  }
  end_time_ = nullptr;
  clear_id();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Span::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Span*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .google.protobuf.Timestamp start_time = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::protobuf::Timestamp::_InternalParse;
        object = msg->mutable_start_time();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .google.protobuf.Timestamp end_time = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::protobuf::Timestamp::_InternalParse;
        object = msg->mutable_end_time();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .flyteidl.core.WorkflowExecutionIdentifier workflow_id = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::flyteidl::core::WorkflowExecutionIdentifier::_InternalParse;
        object = msg->mutable_workflow_id();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .flyteidl.core.NodeExecutionIdentifier node_id = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::flyteidl::core::NodeExecutionIdentifier::_InternalParse;
        object = msg->mutable_node_id();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .flyteidl.core.TaskExecutionIdentifier task_id = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 42) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::flyteidl::core::TaskExecutionIdentifier::_InternalParse;
        object = msg->mutable_task_id();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // string operation_id = 6;
      case 6: {
        if (static_cast<::google::protobuf::uint8>(tag) != 50) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.core.Span.operation_id");
        object = msg->mutable_operation_id();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // repeated .flyteidl.core.Span spans = 7;
      case 7: {
        if (static_cast<::google::protobuf::uint8>(tag) != 58) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::flyteidl::core::Span::_InternalParse;
          object = msg->add_spans();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 58 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Span::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.core.Span)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.Timestamp start_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_start_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp end_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .flyteidl.core.WorkflowExecutionIdentifier workflow_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_workflow_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .flyteidl.core.NodeExecutionIdentifier node_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_node_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .flyteidl.core.TaskExecutionIdentifier task_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (42 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_task_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string operation_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (50 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_operation_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->operation_id().data(), static_cast<int>(this->operation_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.core.Span.operation_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .flyteidl.core.Span spans = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (58 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_spans()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:flyteidl.core.Span)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.core.Span)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Span::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.core.Span)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp start_time = 1;
  if (this->has_start_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::start_time(this), output);
  }

  // .google.protobuf.Timestamp end_time = 2;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::end_time(this), output);
  }

  // .flyteidl.core.WorkflowExecutionIdentifier workflow_id = 3;
  if (has_workflow_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, HasBitSetters::workflow_id(this), output);
  }

  // .flyteidl.core.NodeExecutionIdentifier node_id = 4;
  if (has_node_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, HasBitSetters::node_id(this), output);
  }

  // .flyteidl.core.TaskExecutionIdentifier task_id = 5;
  if (has_task_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, HasBitSetters::task_id(this), output);
  }

  // string operation_id = 6;
  if (has_operation_id()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operation_id().data(), static_cast<int>(this->operation_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.core.Span.operation_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->operation_id(), output);
  }

  // repeated .flyteidl.core.Span spans = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->spans_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7,
      this->spans(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.core.Span)
}

::google::protobuf::uint8* Span::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.core.Span)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp start_time = 1;
  if (this->has_start_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::start_time(this), target);
  }

  // .google.protobuf.Timestamp end_time = 2;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::end_time(this), target);
  }

  // .flyteidl.core.WorkflowExecutionIdentifier workflow_id = 3;
  if (has_workflow_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, HasBitSetters::workflow_id(this), target);
  }

  // .flyteidl.core.NodeExecutionIdentifier node_id = 4;
  if (has_node_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, HasBitSetters::node_id(this), target);
  }

  // .flyteidl.core.TaskExecutionIdentifier task_id = 5;
  if (has_task_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, HasBitSetters::task_id(this), target);
  }

  // string operation_id = 6;
  if (has_operation_id()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operation_id().data(), static_cast<int>(this->operation_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.core.Span.operation_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->operation_id(), target);
  }

  // repeated .flyteidl.core.Span spans = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->spans_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->spans(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.core.Span)
  return target;
}

size_t Span::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.core.Span)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .flyteidl.core.Span spans = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->spans_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->spans(static_cast<int>(i)));
    }
  }

  // .google.protobuf.Timestamp start_time = 1;
  if (this->has_start_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *start_time_);
  }

  // .google.protobuf.Timestamp end_time = 2;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *end_time_);
  }

  switch (id_case()) {
    // .flyteidl.core.WorkflowExecutionIdentifier workflow_id = 3;
    case kWorkflowId: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *id_.workflow_id_);
      break;
    }
    // .flyteidl.core.NodeExecutionIdentifier node_id = 4;
    case kNodeId: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *id_.node_id_);
      break;
    }
    // .flyteidl.core.TaskExecutionIdentifier task_id = 5;
    case kTaskId: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *id_.task_id_);
      break;
    }
    // string operation_id = 6;
    case kOperationId: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->operation_id());
      break;
    }
    case ID_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Span::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.core.Span)
  GOOGLE_DCHECK_NE(&from, this);
  const Span* source =
      ::google::protobuf::DynamicCastToGenerated<Span>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.core.Span)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.core.Span)
    MergeFrom(*source);
  }
}

void Span::MergeFrom(const Span& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.core.Span)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  spans_.MergeFrom(from.spans_);
  if (from.has_start_time()) {
    mutable_start_time()->::google::protobuf::Timestamp::MergeFrom(from.start_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::google::protobuf::Timestamp::MergeFrom(from.end_time());
  }
  switch (from.id_case()) {
    case kWorkflowId: {
      mutable_workflow_id()->::flyteidl::core::WorkflowExecutionIdentifier::MergeFrom(from.workflow_id());
      break;
    }
    case kNodeId: {
      mutable_node_id()->::flyteidl::core::NodeExecutionIdentifier::MergeFrom(from.node_id());
      break;
    }
    case kTaskId: {
      mutable_task_id()->::flyteidl::core::TaskExecutionIdentifier::MergeFrom(from.task_id());
      break;
    }
    case kOperationId: {
      set_operation_id(from.operation_id());
      break;
    }
    case ID_NOT_SET: {
      break;
    }
  }
}

void Span::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.core.Span)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Span::CopyFrom(const Span& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.core.Span)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Span::IsInitialized() const {
  return true;
}

void Span::Swap(Span* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Span::InternalSwap(Span* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&spans_)->InternalSwap(CastToBase(&other->spans_));
  swap(start_time_, other->start_time_);
  swap(end_time_, other->end_time_);
  swap(id_, other->id_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::google::protobuf::Metadata Span::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fcore_2fmetrics_2eproto);
  return ::file_level_metadata_flyteidl_2fcore_2fmetrics_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::flyteidl::core::Span* Arena::CreateMaybeMessage< ::flyteidl::core::Span >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::core::Span >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
