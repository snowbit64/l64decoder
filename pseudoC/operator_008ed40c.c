// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 008ed40c
// Size: 344 bytes
// Signature: undefined __thiscall operator=(DetailLayer * this, DetailLayer * param_1)


/* BaseTerrain::DetailLayer::TEMPNAMEPLACEHOLDERVALUE(BaseTerrain::DetailLayer&&) */

DetailLayer * __thiscall BaseTerrain::DetailLayer::operator=(DetailLayer *this,DetailLayer *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar3;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined2 *)(param_1 + 0x40) = 0;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = uVar4;
  *(undefined8 *)(this + 0x70) = uVar3;
  *(undefined2 *)(param_1 + 0x70) = 0;
  pvVar2 = *(void **)(this + 0x90);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar2;
    operator_delete(pvVar2);
    *(void **)(this + 0x90) = (void *)0x0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x98) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = uVar1;
  return this;
}


