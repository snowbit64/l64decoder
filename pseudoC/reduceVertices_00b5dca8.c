// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reduceVertices
// Entry Point: 00b5dca8
// Size: 332 bytes
// Signature: undefined __thiscall reduceVertices(SimplexSolver * this, bool param_1, bool param_2, bool param_3, bool param_4)


/* SimplexSolver::reduceVertices(bool, bool, bool, bool) */

void __thiscall
SimplexSolver::reduceVertices
          (SimplexSolver *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(uint *)this;
  if ((3 < uVar3) && (!param_4)) {
    uVar3 = uVar3 - 1;
    *(uint *)this = uVar3;
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 4);
    uVar1 = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0x48);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0xc);
    uVar4 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x40);
    *(undefined8 *)(this + 0x28) = uVar5;
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x7c);
    uVar2 = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0x84);
    *(undefined4 *)(this + 0x6c) = uVar1;
    *(undefined8 *)(this + 100) = uVar4;
    *(undefined8 *)(this + 0xa0) = uVar5;
    *(undefined4 *)(this + 0xa8) = uVar2;
  }
  if ((2 < uVar3) && (!param_3)) {
    uVar3 = uVar3 - 1;
    *(uint *)this = uVar3;
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 4);
    uVar1 = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0x48);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0xc);
    uVar4 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x40);
    *(undefined8 *)(this + 0x1c) = uVar5;
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x7c);
    uVar2 = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0x84);
    *(undefined4 *)(this + 0x60) = uVar1;
    *(undefined8 *)(this + 0x58) = uVar4;
    *(undefined8 *)(this + 0x94) = uVar5;
    *(undefined4 *)(this + 0x9c) = uVar2;
  }
  if ((1 < uVar3) && (!param_2)) {
    uVar3 = uVar3 - 1;
    *(uint *)this = uVar3;
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 4);
    uVar1 = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0x48);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0xc);
    uVar4 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x40);
    *(undefined8 *)(this + 0x10) = uVar5;
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x7c);
    uVar2 = *(undefined4 *)(this + (ulong)uVar3 * 0xc + 0x84);
    *(undefined4 *)(this + 0x54) = uVar1;
    *(undefined8 *)(this + 0x4c) = uVar4;
    *(undefined8 *)(this + 0x88) = uVar5;
    *(undefined4 *)(this + 0x90) = uVar2;
  }
  if ((uVar3 != 0) && (!param_1)) {
    uVar3 = uVar3 - 1;
    *(uint *)this = uVar3;
    uVar4 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 4);
    uVar1 = *(undefined4 *)((long)(this + (ulong)uVar3 * 0xc + 0x40) + 8);
    uVar5 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x40);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)((long)(this + (ulong)uVar3 * 0xc + 4) + 8);
    *(undefined8 *)(this + 4) = uVar4;
    uVar4 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x7c);
    uVar2 = *(undefined4 *)((long)(this + (ulong)uVar3 * 0xc + 0x7c) + 8);
    *(undefined4 *)(this + 0x48) = uVar1;
    *(undefined8 *)(this + 0x40) = uVar5;
    *(undefined8 *)(this + 0x7c) = uVar4;
    *(undefined4 *)(this + 0x84) = uVar2;
  }
  return;
}


