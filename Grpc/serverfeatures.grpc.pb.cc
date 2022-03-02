// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: serverfeatures.proto

#include "serverfeatures.pb.h"
#include "serverfeatures.grpc.pb.h"

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
namespace server_features {

static const char* ServerFeatures_method_names[] = {
  "/event_store.client.server_features.ServerFeatures/GetSupportedMethods",
};

std::unique_ptr< ServerFeatures::Stub> ServerFeatures::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ServerFeatures::Stub> stub(new ServerFeatures::Stub(channel));
  return stub;
}

ServerFeatures::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetSupportedMethods_(ServerFeatures_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ServerFeatures::Stub::GetSupportedMethods(::grpc::ClientContext* context, const ::event_store::client::Empty& request, ::event_store::client::server_features::SupportedMethods* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSupportedMethods_, context, request, response);
}

void ServerFeatures::Stub::experimental_async::GetSupportedMethods(::grpc::ClientContext* context, const ::event_store::client::Empty* request, ::event_store::client::server_features::SupportedMethods* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSupportedMethods_, context, request, response, std::move(f));
}

void ServerFeatures::Stub::experimental_async::GetSupportedMethods(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::server_features::SupportedMethods* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetSupportedMethods_, context, request, response, std::move(f));
}

void ServerFeatures::Stub::experimental_async::GetSupportedMethods(::grpc::ClientContext* context, const ::event_store::client::Empty* request, ::event_store::client::server_features::SupportedMethods* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSupportedMethods_, context, request, response, reactor);
}

void ServerFeatures::Stub::experimental_async::GetSupportedMethods(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::event_store::client::server_features::SupportedMethods* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetSupportedMethods_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::server_features::SupportedMethods>* ServerFeatures::Stub::AsyncGetSupportedMethodsRaw(::grpc::ClientContext* context, const ::event_store::client::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::server_features::SupportedMethods>::Create(channel_.get(), cq, rpcmethod_GetSupportedMethods_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::event_store::client::server_features::SupportedMethods>* ServerFeatures::Stub::PrepareAsyncGetSupportedMethodsRaw(::grpc::ClientContext* context, const ::event_store::client::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::event_store::client::server_features::SupportedMethods>::Create(channel_.get(), cq, rpcmethod_GetSupportedMethods_, context, request, false);
}

ServerFeatures::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServerFeatures_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServerFeatures::Service, ::event_store::client::Empty, ::event_store::client::server_features::SupportedMethods>(
          [](ServerFeatures::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::event_store::client::Empty* req,
             ::event_store::client::server_features::SupportedMethods* resp) {
               return service->GetSupportedMethods(ctx, req, resp);
             }, this)));
}

ServerFeatures::Service::~Service() {
}

::grpc::Status ServerFeatures::Service::GetSupportedMethods(::grpc::ServerContext* context, const ::event_store::client::Empty* request, ::event_store::client::server_features::SupportedMethods* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace event_store
}  // namespace client
}  // namespace server_features
