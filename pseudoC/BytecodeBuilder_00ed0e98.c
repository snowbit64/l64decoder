// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BytecodeBuilder
// Entry Point: 00ed0e98
// Size: 552 bytes
// Signature: undefined __thiscall ~BytecodeBuilder(BytecodeBuilder * this)


/* Luau::BytecodeBuilder::~BytecodeBuilder() */

void __thiscall Luau::BytecodeBuilder::~BytecodeBuilder(BytecodeBuilder *this)

{
  BytecodeBuilder BVar1;
  byte bVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  void *pvVar7;
  
  pbVar5 = *(byte **)(this + 0x268);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x270);
    pbVar6 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar6 = pbVar4 + -0x18;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar6;
      } while (pbVar6 != pbVar5);
      pbVar6 = *(byte **)(this + 0x268);
    }
    *(byte **)(this + 0x270) = pbVar5;
    operator_delete(pbVar6);
  }
  if (((byte)this[0x248] & 1) == 0) {
    BVar1 = this[0x228];
  }
  else {
    operator_delete(*(void **)(this + 600));
    BVar1 = this[0x228];
  }
  if (((byte)BVar1 & 1) == 0) {
    pvVar3 = *(void **)(this + 0x210);
  }
  else {
    operator_delete(*(void **)(this + 0x238));
    pvVar3 = *(void **)(this + 0x210);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x218) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(void **)(this + 0x1e0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1e0));
    *(undefined8 *)(this + 0x1e0) = 0;
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  pvVar3 = *(void **)(this + 0x1c8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x1b0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1b8) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x188));
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 400) = 0;
  }
  pvVar3 = *(void **)(this + 0xe8);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    *(void **)(this + 0xe8) = (void *)0x0;
    *(undefined8 *)(this + 0xf0) = 0;
  }
  pvVar3 = *(void **)(this + 0xb8);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    *(void **)(this + 0xb8) = (void *)0x0;
    *(undefined8 *)(this + 0xc0) = 0;
  }
  pvVar3 = *(void **)(this + 0x98);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x80);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x68);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x50);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar7 = *(void **)(this + 8);
  if (pvVar7 == pvVar3) {
    *(void **)(this + 8) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  do {
    if ((*(byte *)((long)pvVar7 + -0x18) & 1) == 0) {
      if ((*(byte *)((long)pvVar7 + -0x30) & 1) != 0) goto LAB_00ed1054;
LAB_00ed1034:
      bVar2 = *(byte *)((long)pvVar7 + -0x58);
    }
    else {
      operator_delete(*(void **)((long)pvVar7 + -8));
      if ((*(byte *)((long)pvVar7 + -0x30) & 1) == 0) goto LAB_00ed1034;
LAB_00ed1054:
      operator_delete(*(void **)((long)pvVar7 + -0x20));
      bVar2 = *(byte *)((long)pvVar7 + -0x58);
    }
    if ((bVar2 & 1) != 0) {
      operator_delete(*(void **)((long)pvVar7 + -0x48));
    }
    pvVar7 = (void *)((long)pvVar7 + -0x58);
    if (pvVar7 == pvVar3) {
      *(void **)(this + 8) = pvVar3;
      operator_delete(*(void **)this);
      return;
    }
  } while( true );
}


