// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MDVertex
// Entry Point: 00d5a1e8
// Size: 268 bytes
// Signature: undefined __thiscall MDVertex(MDVertex * this, MDVertex * param_1)


/* HACD::MDVertex::MDVertex(HACD::MDVertex&&) */

void __thiscall HACD::MDVertex::MDVertex(MDVertex *this,MDVertex *param_1)

{
  undefined2 uVar1;
  MDVertex *pMVar2;
  MDVertex *pMVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  uVar5 = *(ulong *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = 0x10;
  pMVar3 = this;
  if (uVar5 < 0x11) {
    *(ulong *)(this + 0x88) = uVar5;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x90);
    uVar4 = uVar6 << 3;
    if (uVar6 >> 0x3d != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    *(ulong *)(this + 0x90) = uVar6;
    pMVar2 = (MDVertex *)operator_new__(uVar4);
    *(MDVertex **)(this + 0x80) = pMVar2;
    *(ulong *)(this + 0x88) = uVar5;
    if (uVar6 != 0x10) {
      pMVar3 = pMVar2;
    }
  }
  pMVar2 = param_1;
  if (*(long *)(param_1 + 0x90) != 0x10) {
    pMVar2 = *(MDVertex **)(param_1 + 0x80);
  }
  memcpy(pMVar3,pMVar2,uVar5 << 3);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  uVar5 = *(ulong *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = 0x10;
  if (uVar5 < 0x11) {
    *(ulong *)(this + 0x120) = uVar5;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x128);
    uVar4 = uVar6 << 3;
    if (uVar6 >> 0x3d != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    *(ulong *)(this + 0x128) = uVar6;
    pMVar3 = (MDVertex *)operator_new__(uVar4);
    *(MDVertex **)(this + 0x118) = pMVar3;
    *(ulong *)(this + 0x120) = uVar5;
    if (uVar6 != 0x10) goto LAB_00d5a2a8;
  }
  pMVar3 = this + 0x98;
LAB_00d5a2a8:
  pMVar2 = param_1 + 0x98;
  if (*(long *)(param_1 + 0x128) != 0x10) {
    pMVar2 = *(MDVertex **)(param_1 + 0x118);
  }
  memcpy(pMVar3,pMVar2,uVar5 << 3);
  uVar7 = *(undefined8 *)(param_1 + 0x130);
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  uVar8 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x130) = uVar7;
  *(undefined8 *)(this + 0x148) = uVar9;
  *(undefined8 *)(this + 0x140) = uVar8;
  uVar11 = *(undefined8 *)(param_1 + 0x160);
  uVar8 = *(undefined8 *)(param_1 + 0x178);
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  uVar1 = *(undefined2 *)(param_1 + 0x180);
  uVar10 = *(undefined8 *)(param_1 + 0x158);
  uVar9 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(this + 0x168) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(this + 0x160) = uVar11;
  *(undefined8 *)(this + 0x178) = uVar8;
  *(undefined8 *)(this + 0x170) = uVar7;
  *(undefined2 *)(this + 0x180) = uVar1;
  *(undefined8 *)(this + 0x158) = uVar10;
  *(undefined8 *)(this + 0x150) = uVar9;
  return;
}


