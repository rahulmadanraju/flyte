// Code generated by mockery v1.0.1. DO NOT EDIT.

package mocks

import (
	context "context"

	core "github.com/flyteorg/flyte/flyteidl/gen/pb-go/flyteidl/core"
	mock "github.com/stretchr/testify/mock"
)

// GlobalSecretProvider is an autogenerated mock type for the GlobalSecretProvider type
type GlobalSecretProvider struct {
	mock.Mock
}

type GlobalSecretProvider_GetForSecret struct {
	*mock.Call
}

func (_m GlobalSecretProvider_GetForSecret) Return(_a0 string, _a1 error) *GlobalSecretProvider_GetForSecret {
	return &GlobalSecretProvider_GetForSecret{Call: _m.Call.Return(_a0, _a1)}
}

func (_m *GlobalSecretProvider) OnGetForSecret(ctx context.Context, secret *core.Secret) *GlobalSecretProvider_GetForSecret {
	c_call := _m.On("GetForSecret", ctx, secret)
	return &GlobalSecretProvider_GetForSecret{Call: c_call}
}

func (_m *GlobalSecretProvider) OnGetForSecretMatch(matchers ...interface{}) *GlobalSecretProvider_GetForSecret {
	c_call := _m.On("GetForSecret", matchers...)
	return &GlobalSecretProvider_GetForSecret{Call: c_call}
}

// GetForSecret provides a mock function with given fields: ctx, secret
func (_m *GlobalSecretProvider) GetForSecret(ctx context.Context, secret *core.Secret) (string, error) {
	ret := _m.Called(ctx, secret)

	var r0 string
	if rf, ok := ret.Get(0).(func(context.Context, *core.Secret) string); ok {
		r0 = rf(ctx, secret)
	} else {
		r0 = ret.Get(0).(string)
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(context.Context, *core.Secret) error); ok {
		r1 = rf(ctx, secret)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}
