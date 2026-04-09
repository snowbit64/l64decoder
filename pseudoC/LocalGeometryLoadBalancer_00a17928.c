// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LocalGeometryLoadBalancer
// Entry Point: 00a17928
// Size: 24 bytes
// Signature: undefined __thiscall ~LocalGeometryLoadBalancer(LocalGeometryLoadBalancer * this)


/* LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer() */

void __thiscall
LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer(LocalGeometryLoadBalancer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


