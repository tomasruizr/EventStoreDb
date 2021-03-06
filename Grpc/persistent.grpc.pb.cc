// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: persistent.proto

#include "persistent.pb.h"
#include "persistent.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace event_store {
namespace client {
namespace persistent_subscriptions {

static const char* PersistentSubscriptions_method_names[] = {
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/Create",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/Update",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/Delete",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/Read",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/GetInfo",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/ReplayParked",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/List",
  "/event_store.client.persistent_subscriptions.PersistentSubscriptions/RestartSubsystem",
};

std::unique_ptr< PersistentSubscriptions::Stub> PersistentSubscriptions::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PersistentSubscriptions::Stub> stub(new PersistentSubscriptions::Stub(channel));
  return stub;
}

PersistentSubscriptions::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Create_(PersistentSubscriptions_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Update_(PersistentSubscriptions_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Delete_(PersistentSubscriptions_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Read_(PersistentSubscriptions_method_names[3], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_GetInfo_(PersistentSubscriptions_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReplayParked_(PersistentSubscriptions_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_List_(PersistentSubscriptions_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RestartSubsystem_(PersistentSubscriptions_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PersistentSubscriptions::Stub::Create(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::CreateReq& request, ::event_store::client::persistent_subscriptions::CreateResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Create_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::CreateReq* request, ::event_store::client::persistent_subscriptions::CreateResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::CreateResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::CreateReq* request, ::event_store::client::persistent_subscriptions::CreateResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::CreateResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::CreateResp>* PersistentSubscriptions::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::CreateReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::CreateResp>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::CreateResp>* PersistentSubscriptions::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::CreateReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::CreateResp>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, false);
}

::grpc::Status PersistentSubscriptions::Stub::Update(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::UpdateReq& request, ::event_store::client::persistent_subscriptions::UpdateResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Update_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::UpdateReq* request, ::event_store::client::persistent_subscriptions::UpdateResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::UpdateResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::UpdateReq* request, ::event_store::client::persistent_subscriptions::UpdateResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::UpdateResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::UpdateResp>* PersistentSubscriptions::Stub::AsyncUpdateRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::UpdateReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::UpdateResp>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::UpdateResp>* PersistentSubscriptions::Stub::PrepareAsyncUpdateRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::UpdateReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::UpdateResp>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, false);
}

::grpc::Status PersistentSubscriptions::Stub::Delete(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::DeleteReq& request, ::event_store::client::persistent_subscriptions::DeleteResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Delete_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::DeleteReq* request, ::event_store::client::persistent_subscriptions::DeleteResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::DeleteResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::DeleteReq* request, ::event_store::client::persistent_subscriptions::DeleteResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::DeleteResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::DeleteResp>* PersistentSubscriptions::Stub::AsyncDeleteRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::DeleteReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::DeleteResp>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::DeleteResp>* PersistentSubscriptions::Stub::PrepareAsyncDeleteRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::DeleteReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::DeleteResp>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, false);
}

::grpc::ClientReaderWriter< ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>* PersistentSubscriptions::Stub::ReadRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>::Create(channel_.get(), rpcmethod_Read_, context);
}

void PersistentSubscriptions::Stub::experimental_async::Read(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::event_store::client::persistent_subscriptions::ReadReq,::event_store::client::persistent_subscriptions::ReadResp>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::event_store::client::persistent_subscriptions::ReadReq,::event_store::client::persistent_subscriptions::ReadResp>::Create(stub_->channel_.get(), stub_->rpcmethod_Read_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>* PersistentSubscriptions::Stub::AsyncReadRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>::Create(channel_.get(), cq, rpcmethod_Read_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>* PersistentSubscriptions::Stub::PrepareAsyncReadRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>::Create(channel_.get(), cq, rpcmethod_Read_, context, false, nullptr);
}

::grpc::Status PersistentSubscriptions::Stub::GetInfo(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::GetInfoReq& request, ::event_store::client::persistent_subscriptions::GetInfoResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetInfo_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::GetInfo(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::GetInfoReq* request, ::event_store::client::persistent_subscriptions::GetInfoResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetInfo_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::GetInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::GetInfoResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetInfo_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::GetInfo(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::GetInfoReq* request, ::event_store::client::persistent_subscriptions::GetInfoResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetInfo_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::GetInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::GetInfoResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::GetInfoResp>* PersistentSubscriptions::Stub::AsyncGetInfoRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::GetInfoReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::GetInfoResp>::Create(channel_.get(), cq, rpcmethod_GetInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::GetInfoResp>* PersistentSubscriptions::Stub::PrepareAsyncGetInfoRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::GetInfoReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::GetInfoResp>::Create(channel_.get(), cq, rpcmethod_GetInfo_, context, request, false);
}

::grpc::Status PersistentSubscriptions::Stub::ReplayParked(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ReplayParkedReq& request, ::event_store::client::persistent_subscriptions::ReplayParkedResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ReplayParked_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::ReplayParked(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ReplayParkedReq* request, ::event_store::client::persistent_subscriptions::ReplayParkedResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ReplayParked_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::ReplayParked(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::ReplayParkedResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ReplayParked_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::ReplayParked(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ReplayParkedReq* request, ::event_store::client::persistent_subscriptions::ReplayParkedResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ReplayParked_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::ReplayParked(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::ReplayParkedResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ReplayParked_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::ReplayParkedResp>* PersistentSubscriptions::Stub::AsyncReplayParkedRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ReplayParkedReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::ReplayParkedResp>::Create(channel_.get(), cq, rpcmethod_ReplayParked_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::ReplayParkedResp>* PersistentSubscriptions::Stub::PrepareAsyncReplayParkedRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ReplayParkedReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::ReplayParkedResp>::Create(channel_.get(), cq, rpcmethod_ReplayParked_, context, request, false);
}

::grpc::Status PersistentSubscriptions::Stub::List(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ListReq& request, ::event_store::client::persistent_subscriptions::ListResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_List_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::List(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ListReq* request, ::event_store::client::persistent_subscriptions::ListResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_List_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::List(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::ListResp* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_List_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::List(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ListReq* request, ::event_store::client::persistent_subscriptions::ListResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_List_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::List(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::persistent_subscriptions::ListResp* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_List_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::ListResp>* PersistentSubscriptions::Stub::AsyncListRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ListReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::ListResp>::Create(channel_.get(), cq, rpcmethod_List_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::persistent_subscriptions::ListResp>* PersistentSubscriptions::Stub::PrepareAsyncListRaw(::grpc::ClientContext* context, const ::event_store::client::persistent_subscriptions::ListReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::persistent_subscriptions::ListResp>::Create(channel_.get(), cq, rpcmethod_List_, context, request, false);
}

::grpc::Status PersistentSubscriptions::Stub::RestartSubsystem(::grpc::ClientContext* context, const ::event_store::client::Empty& request, ::event_store::client::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RestartSubsystem_, context, request, response);
}

void PersistentSubscriptions::Stub::experimental_async::RestartSubsystem(::grpc::ClientContext* context, const ::event_store::client::Empty* request, ::event_store::client::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RestartSubsystem_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::RestartSubsystem(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RestartSubsystem_, context, request, response, std::move(f));
}

void PersistentSubscriptions::Stub::experimental_async::RestartSubsystem(::grpc::ClientContext* context, const ::event_store::client::Empty* request, ::event_store::client::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RestartSubsystem_, context, request, response, reactor);
}

void PersistentSubscriptions::Stub::experimental_async::RestartSubsystem(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RestartSubsystem_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::Empty>* PersistentSubscriptions::Stub::AsyncRestartSubsystemRaw(::grpc::ClientContext* context, const ::event_store::client::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::Empty>::Create(channel_.get(), cq, rpcmethod_RestartSubsystem_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::Empty>* PersistentSubscriptions::Stub::PrepareAsyncRestartSubsystemRaw(::grpc::ClientContext* context, const ::event_store::client::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::Empty>::Create(channel_.get(), cq, rpcmethod_RestartSubsystem_, context, request, false);
}

PersistentSubscriptions::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::CreateReq, ::event_store::client::persistent_subscriptions::CreateResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::persistent_subscriptions::CreateReq* req,
             ::event_store::client::persistent_subscriptions::CreateResp* resp) {
               return service->Create(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::UpdateReq, ::event_store::client::persistent_subscriptions::UpdateResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::persistent_subscriptions::UpdateReq* req,
             ::event_store::client::persistent_subscriptions::UpdateResp* resp) {
               return service->Update(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::DeleteReq, ::event_store::client::persistent_subscriptions::DeleteResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::persistent_subscriptions::DeleteReq* req,
             ::event_store::client::persistent_subscriptions::DeleteResp* resp) {
               return service->Delete(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[3],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::ReadReq, ::event_store::client::persistent_subscriptions::ReadResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             ::grpc_impl::ServerReaderWriter<::event_store::client::persistent_subscriptions::ReadResp,
             ::event_store::client::persistent_subscriptions::ReadReq>* stream) {
               return service->Read(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::GetInfoReq, ::event_store::client::persistent_subscriptions::GetInfoResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::persistent_subscriptions::GetInfoReq* req,
             ::event_store::client::persistent_subscriptions::GetInfoResp* resp) {
               return service->GetInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::ReplayParkedReq, ::event_store::client::persistent_subscriptions::ReplayParkedResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::persistent_subscriptions::ReplayParkedReq* req,
             ::event_store::client::persistent_subscriptions::ReplayParkedResp* resp) {
               return service->ReplayParked(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::persistent_subscriptions::ListReq, ::event_store::client::persistent_subscriptions::ListResp>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::persistent_subscriptions::ListReq* req,
             ::event_store::client::persistent_subscriptions::ListResp* resp) {
               return service->List(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersistentSubscriptions_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersistentSubscriptions::Service, ::event_store::client::Empty, ::event_store::client::Empty>(
          [](PersistentSubscriptions::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::Empty* req,
             ::event_store::client::Empty* resp) {
               return service->RestartSubsystem(ctx, req, resp);
             }, this)));
}

PersistentSubscriptions::Service::~Service() {
}

::grpc::Status PersistentSubscriptions::Service::Create(::grpc::ServerContext* context, const ::event_store::client::persistent_subscriptions::CreateReq* request, ::event_store::client::persistent_subscriptions::CreateResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::Update(::grpc::ServerContext* context, const ::event_store::client::persistent_subscriptions::UpdateReq* request, ::event_store::client::persistent_subscriptions::UpdateResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::Delete(::grpc::ServerContext* context, const ::event_store::client::persistent_subscriptions::DeleteReq* request, ::event_store::client::persistent_subscriptions::DeleteResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::Read(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::event_store::client::persistent_subscriptions::ReadResp, ::event_store::client::persistent_subscriptions::ReadReq>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::GetInfo(::grpc::ServerContext* context, const ::event_store::client::persistent_subscriptions::GetInfoReq* request, ::event_store::client::persistent_subscriptions::GetInfoResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::ReplayParked(::grpc::ServerContext* context, const ::event_store::client::persistent_subscriptions::ReplayParkedReq* request, ::event_store::client::persistent_subscriptions::ReplayParkedResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::List(::grpc::ServerContext* context, const ::event_store::client::persistent_subscriptions::ListReq* request, ::event_store::client::persistent_subscriptions::ListResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PersistentSubscriptions::Service::RestartSubsystem(::grpc::ServerContext* context, const ::event_store::client::Empty* request, ::event_store::client::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace event_store
}  // namespace client
}  // namespace persistent_subscriptions

