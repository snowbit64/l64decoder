// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SArray
// Entry Point: 00d4f248
// Size: 348 bytes
// Signature: undefined __thiscall SArray(SArray<HACD::DPoint,16ul> * this, SArray * param_1)


/* HACD::SArray<HACD::DPoint, 16ul>::SArray(HACD::SArray<HACD::DPoint, 16ul> const&) */

void __thiscall
HACD::SArray<HACD::DPoint,16ul>::SArray(SArray<HACD::DPoint,16ul> *this,SArray *param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  ulong *puVar3;
  ulong *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x70) = 0;
  *(undefined2 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined2 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined2 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined2 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined2 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined2 *)(this + 0x130) = 0;
  *(undefined2 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined2 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined2 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  uVar4 = *(ulong *)(param_1 + 0x188);
  *(undefined8 *)(this + 400) = 0x10;
  if (uVar4 < 0x11) {
    *(ulong *)(this + 0x188) = uVar4;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 400);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    uVar6 = uVar5 * 0x18;
    *(ulong *)(this + 400) = uVar5;
    uVar1 = uVar6 + 8;
    if (SUB168(auVar2 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar6) {
      uVar1 = 0xffffffffffffffff;
    }
    puVar3 = (ulong *)operator_new__(uVar1);
    __dest = puVar3 + 1;
    *puVar3 = uVar5;
    puVar3 = __dest;
    if (uVar5 == 0) {
      *(ulong **)(this + 0x180) = __dest;
      *(ulong *)(this + 0x188) = uVar4;
      goto LAB_00d4f378;
    }
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined2 *)(puVar3 + 2) = 0;
      uVar6 = uVar6 - 0x18;
      puVar3 = puVar3 + 3;
    } while (uVar6 != 0);
    *(ulong **)(this + 0x180) = __dest;
    *(ulong *)(this + 0x188) = uVar4;
    if (uVar5 != 0x10) goto LAB_00d4f378;
  }
  __dest = (ulong *)this;
LAB_00d4f378:
  if (*(long *)(param_1 + 400) != 0x10) {
    param_1 = *(SArray **)(param_1 + 0x180);
  }
  memcpy(__dest,param_1,uVar4 * 0x18);
  return;
}


