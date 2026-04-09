// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 00945218
// Size: 444 bytes
// Signature: undefined __thiscall saveToDesc(GsMaterial * this, MaterialDesc * param_1)


/* GsMaterial::saveToDesc(MaterialDesc&) */

void __thiscall GsMaterial::saveToDesc(GsMaterial *this,MaterialDesc *param_1)

{
  GsMaterial GVar1;
  GsMaterial GVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  uVar6 = *(undefined8 *)(this + 0x30);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x48);
  GVar1 = this[100];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x50);
  uVar11 = *(undefined8 *)(this + 0x5c);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  GVar2 = this[0x9c];
  *(GsMaterial *)(param_1 + 0x54) = GVar1;
  GVar1 = this[0x9d];
  *(undefined8 *)(param_1 + 0x44) = uVar11;
  uVar10 = *(undefined4 *)(this + 0x68);
  *(GsMaterial *)(param_1 + 0x66) = GVar2;
  uVar12 = *(undefined4 *)(this + 0xac);
  *(GsMaterial *)(param_1 + 100) = GVar1;
  GVar1 = this[0x9e];
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  uVar6 = *(undefined8 *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  lVar7 = *(long *)(this + 0x80);
  *(GsMaterial *)(param_1 + 0x65) = GVar1;
  *(undefined8 *)(param_1 + 0x3c) = uVar6;
  uVar6 = *(undefined8 *)(this + 0xb0);
  uVar3 = *(uint *)(this + 0x88);
  uVar4 = (ulong)uVar3;
  *(long *)(param_1 + 0x68) = lVar7;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  uVar10 = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar10;
  if (lVar7 == 0) goto LAB_009453b8;
  lVar5 = *(long *)(lVar7 + 0x110);
  uVar8 = (*(long *)(lVar7 + 0x118) - lVar5 >> 5) * 0x6db6db6db6db6db7;
  if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
    lVar7 = lVar5 + uVar4 * 0xe0;
    uVar9 = *(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58);
    if ((uVar9 & 0x7ffffff80) == 0) {
      uVar9 = uVar9 >> 3;
      *(int *)(param_1 + 0x74) = (int)uVar9;
      if ((int)uVar9 == 0) goto LAB_0094534c;
    }
    else {
      uVar9 = 0x10;
      *(undefined4 *)(param_1 + 0x74) = 0x10;
    }
    uVar8 = 0;
    do {
      lVar7 = uVar8 * 8;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(param_1 + lVar7 + 0x80) = *(undefined8 *)(*(long *)(this + 0x70) + lVar7);
    } while ((uVar9 & 0xffffffff) != uVar8);
    lVar5 = *(long *)(*(long *)(this + 0x80) + 0x110);
    uVar8 = (*(long *)(*(long *)(this + 0x80) + 0x118) - lVar5 >> 5) * 0x6db6db6db6db6db7;
  }
LAB_0094534c:
  if (uVar4 < uVar8) {
    lVar5 = lVar5 + uVar4 * 0xe0;
    uVar3 = (uint)((ulong)(*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40)) >> 3);
    if (uVar3 < 0x14) {
      *(uint *)(param_1 + 0x78) = uVar3;
      if (uVar3 == 0) goto LAB_009453b8;
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 0x14;
    }
    lVar7 = 0;
    uVar4 = 0;
    uVar3 = *(uint *)(param_1 + 0x78);
    do {
      uVar4 = uVar4 + 1;
      uVar6 = *(undefined8 *)(*(long *)(this + 0x78) + lVar7);
      *(undefined8 *)((long)(param_1 + lVar7 + 0x100) + 8) =
           ((undefined8 *)(*(long *)(this + 0x78) + lVar7))[1];
      *(undefined8 *)(param_1 + lVar7 + 0x100) = uVar6;
      lVar7 = lVar7 + 0x10;
    } while (uVar4 < uVar3);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
LAB_009453b8:
  uVar6 = *(undefined8 *)(this + 8);
  uVar10 = *(undefined4 *)(this + 0x170);
  *(GsMaterial *)(param_1 + 0x10) = this[0x1c];
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0x240) = uVar10;
  return;
}


