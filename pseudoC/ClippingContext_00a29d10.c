// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ClippingContext
// Entry Point: 00a29d10
// Size: 628 bytes
// Signature: undefined __thiscall ClippingContext(ClippingContext * this, uint param_1, uint param_2, float param_3, Matrix4x4 * param_4, float param_5, float param_6, float param_7)


/* LightListRasterizer::ClippingContext::ClippingContext(unsigned int, unsigned int, float,
   Matrix4x4 const&, float, float, float) */

void __thiscall
LightListRasterizer::ClippingContext::ClippingContext
          (ClippingContext *this,uint param_1,uint param_2,float param_3,Matrix4x4 *param_4,
          float param_5,float param_6,float param_7)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = param_1 * 3 * param_2;
  *(Matrix4x4 **)(this + 0x188) = param_4;
                    /* try { // try from 00a29d74 to 00a29f43 has its CatchHandler @ 00a29f84 */
  pvVar3 = operator_new__((ulong)uVar2 << 4);
  uVar1 = param_1 * 6;
  *(void **)this = pvVar3;
  pvVar3 = operator_new__((ulong)uVar1 << 2);
  *(void **)(this + 8) = pvVar3;
  *(undefined8 *)(this + 0x10) = 0;
  uVar4 = (ulong)param_2 << 4;
  *(undefined4 *)(this + 0x18) = 0;
  *(uint *)(this + 0x38) = uVar2;
  *(uint *)(this + 0x3c) = param_1 * 3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x20) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x28) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  uVar2 = param_2 * param_1;
  *(void **)(this + 0x30) = pvVar3;
  pvVar3 = operator_new__((ulong)uVar2 << 4);
  uVar6 = (ulong)(param_1 << 1) << 2;
  *(void **)(this + 0x40) = pvVar3;
  pvVar3 = operator_new__(uVar6);
  *(void **)(this + 0x48) = pvVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(uint *)(this + 0x78) = uVar2;
  *(uint *)(this + 0x7c) = param_1;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x60) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x68) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x70) = pvVar3;
  pvVar3 = operator_new__((ulong)uVar2 << 4);
  *(void **)(this + 0x80) = pvVar3;
  pvVar3 = operator_new__(uVar6);
  *(void **)(this + 0x88) = pvVar3;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(uint *)(this + 0xb8) = uVar2;
  *(uint *)(this + 0xbc) = param_1;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0xa0) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0xa8) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  uVar2 = uVar1 * param_2;
  *(void **)(this + 0xb0) = pvVar3;
  uVar5 = (ulong)uVar2 << 4;
  pvVar3 = operator_new__(uVar5);
  *(void **)(this + 0xc0) = pvVar3;
  uVar6 = (ulong)(param_1 * 0xc) << 2;
  pvVar3 = operator_new__(uVar6);
  *(void **)(this + 200) = pvVar3;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(uint *)(this + 0xf8) = uVar2;
  *(uint *)(this + 0xfc) = uVar1;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0xe0) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0xe8) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0xf0) = pvVar3;
  pvVar3 = operator_new__(uVar5);
  *(void **)(this + 0x100) = pvVar3;
  pvVar3 = operator_new__(uVar6);
  *(void **)(this + 0x108) = pvVar3;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(uint *)(this + 0x138) = uVar2;
  *(uint *)(this + 0x13c) = uVar1;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x120) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x128) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x130) = pvVar3;
  pvVar3 = operator_new__(uVar5);
  *(void **)(this + 0x140) = pvVar3;
  pvVar3 = operator_new__(uVar6);
  *(void **)(this + 0x148) = pvVar3;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(uint *)(this + 0x178) = uVar2;
  *(uint *)(this + 0x17c) = uVar1;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x160) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x168) = pvVar3;
  pvVar3 = operator_new__(uVar4);
  *(void **)(this + 0x170) = pvVar3;
  *(float *)(this + 0x180) = param_3;
  *(float *)(this + 400) = param_5;
  *(float *)(this + 0x194) = param_6;
  *(float *)(this + 0x198) = param_7;
  *(undefined2 *)(this + 0x19c) = 0;
  return;
}


