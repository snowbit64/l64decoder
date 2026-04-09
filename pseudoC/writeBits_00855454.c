// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBits
// Entry Point: 00855454
// Size: 364 bytes
// Signature: undefined __thiscall writeBits(ChunkedBitSquare * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* ChunkedBitSquare::writeBits(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
ChunkedBitSquare::writeBits
          (ChunkedBitSquare *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  
  uVar9 = *(uint *)(this + (ulong)param_3 * 4 + 0x68);
  uVar2 = *(uint *)(this + (ulong)((param_4 + param_3) - 1) * 4 + 0x68);
  iVar3 = (((param_2 >> 5) << (ulong)(*(uint *)this & 0x1f)) + (param_1 >> 5)) *
          *(int *)(this + 0x34);
  uVar7 = (ulong)(iVar3 + uVar9);
  uVar1 = param_1 & 0x1f | (param_2 & 0x1f) << 5;
  lVar4 = *(long *)(*(long *)(this + 0x28) + uVar7 * 8);
  uVar6 = param_3 - *(int *)(this + (ulong)uVar9 * 8 + 0x38);
  if (uVar9 == uVar2) {
    uVar9 = param_4 & 0x1f;
  }
  else {
    uVar5 = (**(code **)(lVar4 + 8))
                      (lVar4,uVar1,uVar6,
                       *(uint *)(this + (ulong)uVar9 * 8 + 0x3c) >> (ulong)(uVar6 & 0x1f),param_5);
    uVar9 = uVar9 + 1;
    *(undefined8 *)(*(long *)(this + 0x28) + uVar7 * 8) = uVar5;
    if (uVar9 < uVar2) {
      puVar8 = (undefined4 *)(this + (ulong)uVar9 * 8 + 0x3c);
      do {
        lVar10 = (ulong)(iVar3 + uVar9) * 8;
        lVar4 = *(long *)(*(long *)(this + 0x28) + lVar10);
        uVar5 = (**(code **)(lVar4 + 8))
                          (lVar4,uVar1,0,*puVar8,param_5 >> (ulong)(puVar8[-1] - param_3 & 0x1f));
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 2;
        *(undefined8 *)(*(long *)(this + 0x28) + lVar10) = uVar5;
      } while (uVar9 < uVar2);
    }
    uVar7 = (ulong)(iVar3 + uVar2);
    uVar6 = 0;
    lVar4 = *(long *)(*(long *)(this + 0x28) + uVar7 * 8);
    uVar9 = (param_4 + param_3) - *(int *)(this + (ulong)uVar2 * 8 + 0x38) & 0x1f;
    param_5 = param_5 >> (ulong)(*(int *)(this + (ulong)uVar2 * 8 + 0x38) - param_3 & 0x1f);
  }
  uVar5 = (**(code **)(lVar4 + 8))(lVar4,uVar1,uVar6,~(-1 << (ulong)uVar9),param_5);
  *(undefined8 *)(*(long *)(this + 0x28) + uVar7 * 8) = uVar5;
  return;
}


