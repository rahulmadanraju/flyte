// Code generated by protoc-gen-go. DO NOT EDIT.
// source: flyteidl/admin/version.proto

package admin

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// Response for the GetVersion API
type GetVersionResponse struct {
	// The control plane version information. FlyteAdmin and related components
	// form the control plane of Flyte
	ControlPlaneVersion  *Version `protobuf:"bytes,1,opt,name=control_plane_version,json=controlPlaneVersion,proto3" json:"control_plane_version,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *GetVersionResponse) Reset()         { *m = GetVersionResponse{} }
func (m *GetVersionResponse) String() string { return proto.CompactTextString(m) }
func (*GetVersionResponse) ProtoMessage()    {}
func (*GetVersionResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_a025621cd13402e3, []int{0}
}

func (m *GetVersionResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetVersionResponse.Unmarshal(m, b)
}
func (m *GetVersionResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetVersionResponse.Marshal(b, m, deterministic)
}
func (m *GetVersionResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetVersionResponse.Merge(m, src)
}
func (m *GetVersionResponse) XXX_Size() int {
	return xxx_messageInfo_GetVersionResponse.Size(m)
}
func (m *GetVersionResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_GetVersionResponse.DiscardUnknown(m)
}

var xxx_messageInfo_GetVersionResponse proto.InternalMessageInfo

func (m *GetVersionResponse) GetControlPlaneVersion() *Version {
	if m != nil {
		return m.ControlPlaneVersion
	}
	return nil
}

// Provides Version information for a component
type Version struct {
	// Specifies the GIT sha of the build
	Build string `protobuf:"bytes,1,opt,name=Build,proto3" json:"Build,omitempty"`
	// Version for the build, should follow a semver
	Version string `protobuf:"bytes,2,opt,name=Version,proto3" json:"Version,omitempty"`
	// Build timestamp
	BuildTime            string   `protobuf:"bytes,3,opt,name=BuildTime,proto3" json:"BuildTime,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Version) Reset()         { *m = Version{} }
func (m *Version) String() string { return proto.CompactTextString(m) }
func (*Version) ProtoMessage()    {}
func (*Version) Descriptor() ([]byte, []int) {
	return fileDescriptor_a025621cd13402e3, []int{1}
}

func (m *Version) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Version.Unmarshal(m, b)
}
func (m *Version) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Version.Marshal(b, m, deterministic)
}
func (m *Version) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Version.Merge(m, src)
}
func (m *Version) XXX_Size() int {
	return xxx_messageInfo_Version.Size(m)
}
func (m *Version) XXX_DiscardUnknown() {
	xxx_messageInfo_Version.DiscardUnknown(m)
}

var xxx_messageInfo_Version proto.InternalMessageInfo

func (m *Version) GetBuild() string {
	if m != nil {
		return m.Build
	}
	return ""
}

func (m *Version) GetVersion() string {
	if m != nil {
		return m.Version
	}
	return ""
}

func (m *Version) GetBuildTime() string {
	if m != nil {
		return m.BuildTime
	}
	return ""
}

// Empty request for GetVersion
type GetVersionRequest struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *GetVersionRequest) Reset()         { *m = GetVersionRequest{} }
func (m *GetVersionRequest) String() string { return proto.CompactTextString(m) }
func (*GetVersionRequest) ProtoMessage()    {}
func (*GetVersionRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_a025621cd13402e3, []int{2}
}

func (m *GetVersionRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetVersionRequest.Unmarshal(m, b)
}
func (m *GetVersionRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetVersionRequest.Marshal(b, m, deterministic)
}
func (m *GetVersionRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetVersionRequest.Merge(m, src)
}
func (m *GetVersionRequest) XXX_Size() int {
	return xxx_messageInfo_GetVersionRequest.Size(m)
}
func (m *GetVersionRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_GetVersionRequest.DiscardUnknown(m)
}

var xxx_messageInfo_GetVersionRequest proto.InternalMessageInfo

func init() {
	proto.RegisterType((*GetVersionResponse)(nil), "flyteidl.admin.GetVersionResponse")
	proto.RegisterType((*Version)(nil), "flyteidl.admin.Version")
	proto.RegisterType((*GetVersionRequest)(nil), "flyteidl.admin.GetVersionRequest")
}

func init() { proto.RegisterFile("flyteidl/admin/version.proto", fileDescriptor_a025621cd13402e3) }

var fileDescriptor_a025621cd13402e3 = []byte{
	// 219 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x54, 0x50, 0xbd, 0x4b, 0xc7, 0x30,
	0x10, 0xe5, 0xa7, 0xa8, 0x34, 0x82, 0x60, 0xaa, 0x98, 0xa1, 0x83, 0x74, 0x72, 0x31, 0x01, 0x1d,
	0xc5, 0xa5, 0x8b, 0x83, 0x8b, 0x14, 0x51, 0x70, 0x29, 0xfd, 0x38, 0x63, 0x20, 0xcd, 0xc5, 0x24,
	0x15, 0xfc, 0xef, 0xc5, 0x34, 0xad, 0x76, 0xbb, 0x7b, 0x5f, 0x3c, 0x1e, 0x29, 0xde, 0xf5, 0x77,
	0x00, 0x35, 0x68, 0xd1, 0x0e, 0xa3, 0x32, 0xe2, 0x0b, 0x9c, 0x57, 0x68, 0xb8, 0x75, 0x18, 0x90,
	0x9e, 0x2c, 0x2c, 0x8f, 0x6c, 0xd9, 0x12, 0xfa, 0x00, 0xe1, 0x65, 0xd6, 0xd4, 0xe0, 0x2d, 0x1a,
	0x0f, 0xf4, 0x91, 0x9c, 0xf7, 0x68, 0x82, 0x43, 0xdd, 0x58, 0xdd, 0x1a, 0x68, 0x52, 0x08, 0xdb,
	0x5d, 0xee, 0xae, 0x8e, 0x6f, 0x2e, 0xf8, 0x36, 0x85, 0x2f, 0xfe, 0x3c, 0xb9, 0x9e, 0x7e, 0x4d,
	0x09, 0x2c, 0x5f, 0xc9, 0x51, 0x3a, 0xe9, 0x19, 0x39, 0xa8, 0x26, 0xa5, 0x87, 0x98, 0x93, 0xd5,
	0xf3, 0x43, 0xd9, 0x2a, 0x60, 0x7b, 0x11, 0x5f, 0xf5, 0x05, 0xc9, 0xa2, 0xe4, 0x59, 0x8d, 0xc0,
	0xf6, 0x23, 0xf7, 0x07, 0x94, 0x39, 0x39, 0xfd, 0xdf, 0xfd, 0x73, 0x02, 0x1f, 0xaa, 0xfb, 0xb7,
	0x3b, 0xa9, 0xc2, 0xc7, 0xd4, 0xf1, 0x1e, 0x47, 0x11, 0x7b, 0xa2, 0x93, 0xf3, 0x21, 0xd6, 0x69,
	0x24, 0x18, 0x61, 0xbb, 0x6b, 0x89, 0x62, 0xbb, 0x56, 0x77, 0x18, 0x67, 0xba, 0xfd, 0x09, 0x00,
	0x00, 0xff, 0xff, 0x3b, 0x51, 0x09, 0x37, 0x46, 0x01, 0x00, 0x00,
}
