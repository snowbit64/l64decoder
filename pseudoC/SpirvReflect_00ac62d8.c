// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SpirvReflect
// Entry Point: 00ac62d8
// Size: 420 bytes
// Signature: undefined __thiscall SpirvReflect(SpirvReflect * this, uint * param_1, uint param_2)


/* SpirvReflect::SpirvReflect(unsigned int const*, unsigned int) */

void __thiscall SpirvReflect::SpirvReflect(SpirvReflect *this,uint *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined8 uStack_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined auStack_4a0 [1032];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined4 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined4 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  memset(this + 0x60,0,0x404);
  *(undefined8 *)(this + 0x4b0) = 0;
  uStack_4f8 = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_4e8 = 0;
  local_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  local_4d0 = 0;
  uStack_4bc = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  memset(auStack_4a0,0,0x404);
  uStack_60 = 0;
  local_68 = 0;
                    /* try { // try from 00ac63d4 to 00ac63e7 has its CatchHandler @ 00ac6484 */
  uVar2 = spvReflectCreateShaderModule2(1,(ulong)param_2 << 2,param_1,&uStack_4f8);
  *(undefined4 *)this = uVar2;
  memcpy(this + 8,&uStack_4f8,0x4a0);
  memset(&uStack_4f8,0,0x4a0);
                    /* try { // try from 00ac6414 to 00ac641b has its CatchHandler @ 00ac6480 */
  spvReflectDestroyShaderModule(&uStack_4f8);
  *(SpvReflectResult *)(this + 0x4a8) = *(SpvReflectResult *)this;
                    /* try { // try from 00ac6424 to 00ac642b has its CatchHandler @ 00ac647c */
  ToStringResult(*(SpvReflectResult *)this);
  if ((*(byte *)(this + 0x4b0) & 1) != 0) {
    operator_delete(*(void **)(this + 0x4c0));
  }
  *(ulong *)(this + 0x4b8) = CONCAT44(uStack_4f4,uStack_4f8);
  *(ulong *)(this + 0x4b0) = CONCAT44(uStack_4fc,uVar2);
  *(undefined8 *)(this + 0x4c0) = local_4f0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


