// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Variation
// Entry Point: 0094e798
// Size: 440 bytes
// Signature: undefined __thiscall Variation(Variation * this, Variation * param_1)


/* CustomShader::Variation::Variation(CustomShader::Variation&&) */

void __thiscall CustomShader::Variation::Variation(Variation *this,Variation *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar7;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *(long *)(this + 0x18) = lVar2;
  lVar3 = *(long *)(param_1 + 0x20);
  *(long *)(this + 0x20) = lVar3;
  if (lVar3 == 0) {
    *(Variation **)(this + 0x10) = this + 0x18;
  }
  else {
    *(Variation **)(lVar2 + 0x10) = this + 0x18;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(Variation **)(param_1 + 0x10) = param_1 + 0x18;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  *(long *)(this + 0x30) = lVar2;
  lVar3 = *(long *)(param_1 + 0x38);
  *(long *)(this + 0x38) = lVar3;
  if (lVar3 == 0) {
    *(Variation **)(this + 0x28) = this + 0x30;
  }
  else {
    *(Variation **)(lVar2 + 0x10) = this + 0x30;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(Variation **)(param_1 + 0x28) = param_1 + 0x30;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar7;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x60) = uVar7;
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(this + 0x84) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(this + 0x7c) = uVar7;
  *(undefined8 *)(this + 0x78) = uVar9;
  *(undefined8 *)(this + 0x70) = uVar8;
  lVar2 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(this + 0x90) = lVar2;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long *)(this + 0xa0) = lVar3;
  lVar5 = *(long *)(param_1 + 0xa8);
  *(long *)(this + 0xa8) = lVar5;
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(this + 0x98);
    uVar4 = *(ulong *)(lVar3 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(Variation **)(lVar2 + uVar4 * 8) = this + 0xa0;
    *(long *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(long *)(this + 0xb8) = lVar2;
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar3 = *(long *)(param_1 + 200);
  *(long *)(this + 200) = lVar3;
  lVar5 = *(long *)(param_1 + 0xd0);
  *(long *)(this + 0xd0) = lVar5;
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(this + 0xc0);
    uVar4 = *(ulong *)(lVar3 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(Variation **)(lVar2 + uVar4 * 8) = this + 200;
    *(long *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}


