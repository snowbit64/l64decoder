// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reduceVertices
// Entry Point: 00f73328
// Size: 252 bytes
// Signature: undefined __thiscall reduceVertices(btVoronoiSimplexSolver * this, btUsageBitfield * param_1)


/* btVoronoiSimplexSolver::reduceVertices(btUsageBitfield const&) */

void __thiscall
btVoronoiSimplexSolver::reduceVertices(btVoronoiSimplexSolver *this,btUsageBitfield *param_1)

{
  btUsageBitfield bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(uint *)this;
  if ((int)uVar2 < 4) {
    if (uVar2 == 3) goto LAB_00f7336c;
    if ((int)uVar2 < 2) {
      if (uVar2 != 1) {
        return;
      }
      goto LAB_00f733c4;
    }
    uVar2 = 2;
    bVar1 = *param_1;
  }
  else {
    if (((byte)*param_1 >> 3 & 1) == 0) {
      uVar2 = uVar2 - 1;
      *(uint *)this = uVar2;
      uVar4 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 4);
      uVar6 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x5c);
      uVar5 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x54);
      uVar8 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xac);
      uVar7 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xa4);
      *(undefined8 *)(this + 0x3c) = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xc);
      *(undefined8 *)(this + 0x34) = uVar4;
      *(undefined8 *)(this + 0x8c) = uVar6;
      *(undefined8 *)(this + 0x84) = uVar5;
      *(undefined8 *)(this + 0xdc) = uVar8;
      *(undefined8 *)(this + 0xd4) = uVar7;
    }
LAB_00f7336c:
    if (((byte)*param_1 >> 2 & 1) == 0) {
      uVar2 = uVar2 - 1;
      *(uint *)this = uVar2;
      uVar4 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 4);
      uVar6 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x5c);
      uVar5 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x54);
      uVar8 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xac);
      uVar7 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xa4);
      *(undefined8 *)(this + 0x2c) = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xc);
      *(undefined8 *)(this + 0x24) = uVar4;
      *(undefined8 *)(this + 0x7c) = uVar6;
      *(undefined8 *)(this + 0x74) = uVar5;
      *(undefined8 *)(this + 0xcc) = uVar8;
      *(undefined8 *)(this + 0xc4) = uVar7;
    }
    bVar1 = *param_1;
  }
  if (((byte)bVar1 >> 1 & 1) == 0) {
    uVar2 = uVar2 - 1;
    *(uint *)this = uVar2;
    uVar4 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 4);
    uVar6 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x5c);
    uVar5 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x54);
    uVar8 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xac);
    uVar7 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xa4);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0xc);
    *(undefined8 *)(this + 0x14) = uVar4;
    *(undefined8 *)(this + 0x6c) = uVar6;
    *(undefined8 *)(this + 100) = uVar5;
    *(undefined8 *)(this + 0xbc) = uVar8;
    *(undefined8 *)(this + 0xb4) = uVar7;
  }
LAB_00f733c4:
  if (((byte)*param_1 & 1) == 0) {
    lVar3 = (ulong)(uVar2 - 1) * 0x10;
    *(uint *)this = uVar2 - 1;
    uVar4 = *(undefined8 *)(this + lVar3 + 4);
    uVar6 = *(undefined8 *)((long)(this + lVar3 + 0x54) + 8);
    uVar5 = *(undefined8 *)(this + lVar3 + 0x54);
    uVar8 = *(undefined8 *)((long)(this + lVar3 + 0xa4) + 8);
    uVar7 = *(undefined8 *)(this + lVar3 + 0xa4);
    *(undefined8 *)(this + 0xc) = *(undefined8 *)((long)(this + lVar3 + 4) + 8);
    *(undefined8 *)(this + 4) = uVar4;
    *(undefined8 *)(this + 0x5c) = uVar6;
    *(undefined8 *)(this + 0x54) = uVar5;
    *(undefined8 *)(this + 0xac) = uVar8;
    *(undefined8 *)(this + 0xa4) = uVar7;
  }
  return;
}


