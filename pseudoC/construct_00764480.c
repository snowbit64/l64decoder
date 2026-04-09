// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 00764480
// Size: 128 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* DensityMapFilterLua::construct(MethodInvocation*) */

long * DensityMapFilterLua::construct(MethodInvocation *param_1)

{
  long *this;
  ulong uVar1;
  
  this = (long *)operator_new(0x40);
  *(undefined4 *)(this + 2) = 2;
  *(undefined4 *)((long)this + 0x24) = 0x7fffffff;
  *(undefined8 *)((long)this + 0x1c) = 0;
  *(undefined8 *)((long)this + 0x14) = 0;
  *(undefined *)(this + 5) = 0;
  *(undefined4 *)((long)this + 0x2c) = 0;
  *(undefined4 *)(this + 6) = 0;
  *this = (long)&PTR__DensityMapFilterLua_00fdb548;
  this[1] = 0;
  *(undefined4 *)(this + 7) = 0;
  uVar1 = initialize((DensityMapFilterLua *)this,param_1);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*this + 8))(this);
    this = (long *)0x0;
  }
  return this;
}


