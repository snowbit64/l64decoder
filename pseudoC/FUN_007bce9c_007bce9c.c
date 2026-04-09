// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bce9c
// Entry Point: 007bce9c
// Size: 136 bytes
// Signature: undefined FUN_007bce9c(void)


undefined8 * FUN_007bce9c(MethodInvocation *param_1)

{
  undefined8 *this;
  ulong uVar1;
  
  this = (undefined8 *)operator_new(0x78);
                    /* try { // try from 007bcebc to 007bcebf has its CatchHandler @ 007bcf24 */
  DensityMapOperationShapes::Parallelogram::Parallelogram((Parallelogram *)(this + 1));
  this[9] = 0;
  *(undefined4 *)(this + 10) = 2;
  *(undefined8 *)((long)this + 0x5c) = 0;
  *(undefined8 *)((long)this + 0x54) = 0;
  *(undefined4 *)((long)this + 100) = 0x7fffffff;
  *(undefined *)(this + 0xd) = 0;
  *(undefined4 *)((long)this + 0x6c) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  *this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[6] = 0;
  this[5] = 0;
  this[8] = 0;
  this[7] = 0;
  uVar1 = DensityMapModifierLua::initialize((DensityMapModifierLua *)this,param_1);
  if ((uVar1 & 1) == 0) {
    operator_delete(this);
    this = (undefined8 *)0x0;
  }
  return this;
}


