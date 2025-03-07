// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: astarteplatform/msghub/config.proto
// Original file comments:
//
// This file is part of Astarte.
//
// Copyright 2022-2023 SECO Mind Srl
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef GRPC_astarteplatform_2fmsghub_2fconfig_2eproto__INCLUDED
#define GRPC_astarteplatform_2fmsghub_2fconfig_2eproto__INCLUDED

#include "astarteplatform/msghub/config.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace astarteplatform {
namespace msghub {

class MessageHubConfig final {
 public:
  static constexpr char const* service_full_name() {
    return "astarteplatform.msghub.MessageHubConfig";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Set the configuration for the Astarte message hub. 
    virtual ::grpc::Status SetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncSetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncSetConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncSetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncSetConfigRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Set the configuration for the Astarte message hub. 
      virtual void SetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncSetConfigRaw(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncSetConfigRaw(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status SetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncSetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncSetConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncSetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncSetConfigRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)>) override;
      void SetConfig(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncSetConfigRaw(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncSetConfigRaw(::grpc::ClientContext* context, const ::astarteplatform::msghub::ConfigMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SetConfig_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Set the configuration for the Astarte message hub. 
    virtual ::grpc::Status SetConfig(::grpc::ServerContext* context, const ::astarteplatform::msghub::ConfigMessage* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SetConfig() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetConfig(::grpc::ServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetConfig(::grpc::ServerContext* context, ::astarteplatform::msghub::ConfigMessage* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SetConfig<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SetConfig() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::astarteplatform::msghub::ConfigMessage, ::google::protobuf::Empty>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::astarteplatform::msghub::ConfigMessage* request, ::google::protobuf::Empty* response) { return this->SetConfig(context, request, response); }));}
    void SetMessageAllocatorFor_SetConfig(
        ::grpc::MessageAllocator< ::astarteplatform::msghub::ConfigMessage, ::google::protobuf::Empty>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::astarteplatform::msghub::ConfigMessage, ::google::protobuf::Empty>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetConfig(::grpc::ServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SetConfig(
      ::grpc::CallbackServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SetConfig<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SetConfig() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetConfig(::grpc::ServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SetConfig() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetConfig(::grpc::ServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetConfig(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SetConfig() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SetConfig(context, request, response); }));
    }
    ~WithRawCallbackMethod_SetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetConfig(::grpc::ServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SetConfig(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SetConfig() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::astarteplatform::msghub::ConfigMessage, ::google::protobuf::Empty>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::astarteplatform::msghub::ConfigMessage, ::google::protobuf::Empty>* streamer) {
                       return this->StreamedSetConfig(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SetConfig(::grpc::ServerContext* /*context*/, const ::astarteplatform::msghub::ConfigMessage* /*request*/, ::google::protobuf::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSetConfig(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::astarteplatform::msghub::ConfigMessage,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SetConfig<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SetConfig<Service > StreamedService;
};

}  // namespace msghub
}  // namespace astarteplatform


#endif  // GRPC_astarteplatform_2fmsghub_2fconfig_2eproto__INCLUDED
