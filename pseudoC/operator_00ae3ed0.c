// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00ae3ed0
// Size: 708 bytes
// Signature: undefined __thiscall operator=(TextLine * this, TextLine * param_1)


/* TextLine::TEMPNAMEPLACEHOLDERVALUE(TextLine&&) */

TextLine * __thiscall TextLine::operator=(TextLine *this,TextLine *param_1)

{
  void *pvVar1;
  TextLine *pTVar2;
  undefined8 uVar3;
  TextLine *this_00;
  TextLine **ppTVar4;
  TextLine *pTVar5;
  undefined8 uVar6;
  
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar6;
  *(undefined8 *)this = uVar3;
  *(undefined2 *)param_1 = 0;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined2 *)(param_1 + 0x30) = 0;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar6;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined2 *)(param_1 + 0x48) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  pvVar1 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = uVar6;
  *(undefined8 *)(this + 0x70) = uVar3;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar1;
    operator_delete(pvVar1);
    *(void **)(this + 0x78) = (void *)0x0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  ppTVar4 = (TextLine **)(this + 0x98);
  pTVar5 = *ppTVar4;
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  if (pTVar5 != (TextLine *)0x0) {
    this_00 = *(TextLine **)(this + 0xa0);
    pTVar2 = pTVar5;
    if (this_00 != pTVar5) {
      do {
        this_00 = this_00 + -0x158;
        ~TextLine(this_00);
      } while (this_00 != pTVar5);
      pTVar2 = *ppTVar4;
    }
    *(TextLine **)(this + 0xa0) = pTVar5;
    operator_delete(pTVar2);
    *ppTVar4 = (TextLine *)0x0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (((byte)this[0xb0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xc0));
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0xb8) = uVar6;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  if (((byte)this[200] & 1) != 0) {
    operator_delete(*(void **)(this + 0xd8));
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xd0) = uVar6;
  *(undefined8 *)(this + 200) = uVar3;
  *(undefined2 *)(param_1 + 200) = 0;
  if (((byte)this[0xe0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xf0));
  }
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xe8) = uVar6;
  *(undefined8 *)(this + 0xe0) = uVar3;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  if (((byte)this[0xf8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x108));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x100) = uVar6;
  *(undefined8 *)(this + 0xf8) = uVar3;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  if (((byte)this[0x110] & 1) != 0) {
    operator_delete(*(void **)(this + 0x120));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x118);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x118) = uVar6;
  *(undefined8 *)(this + 0x110) = uVar3;
  *(undefined2 *)(param_1 + 0x110) = 0;
  if (((byte)this[0x128] & 1) != 0) {
    operator_delete(*(void **)(this + 0x138));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x130);
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x130) = uVar6;
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined2 *)(param_1 + 0x128) = 0;
  if (((byte)this[0x140] & 1) != 0) {
    operator_delete(*(void **)(this + 0x150));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x148);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(this + 0x150) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(this + 0x148) = uVar6;
  *(undefined8 *)(this + 0x140) = uVar3;
  *(undefined2 *)(param_1 + 0x140) = 0;
  return this;
}


