// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2c950
// Entry Point: 00d2c950
// Size: 636 bytes
// Signature: undefined FUN_00d2c950(void)


void * FUN_00d2c950(long param_1,code **param_2,undefined *param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code **ppcVar5;
  code *pcVar6;
  
  if (param_2 == (code **)0x0) {
    pvVar1 = malloc(0x3a0);
    if (pvVar1 == (void *)0x0) goto LAB_00d2c9d4;
    *(code **)((long)pvVar1 + 0x18) = malloc;
    *(code **)((long)pvVar1 + 0x20) = realloc;
    *(code **)((long)pvVar1 + 0x28) = free;
  }
  else {
    pvVar1 = (void *)(**param_2)(0x3a0);
    if (pvVar1 == (void *)0x0) {
LAB_00d2c9d4:
      if (pvVar1 == (void *)0x0) {
        return (void *)0x0;
      }
    }
    else {
      pcVar6 = *param_2;
      *(code **)((long)pvVar1 + 0x20) = param_2[1];
      *(code **)((long)pvVar1 + 0x18) = pcVar6;
      *(code **)((long)pvVar1 + 0x28) = param_2[2];
    }
  }
  ppcVar5 = (code **)((long)pvVar1 + 0x18);
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x40) = 0;
  *(undefined4 *)((long)pvVar1 + 0x2d0) = 0x10;
  lVar2 = (**ppcVar5)(0x200);
  *(long *)((long)pvVar1 + 0x2e0) = lVar2;
  if (lVar2 != 0) {
    lVar2 = (**(code **)((long)pvVar1 + 0x18))(0x400);
    *(long *)((long)pvVar1 + 0x58) = lVar2;
    if (lVar2 != 0) {
      *(long *)((long)pvVar1 + 0x60) = lVar2 + 0x400;
      if (param_4 != 0) {
        *(long *)((long)pvVar1 + 0x2a0) = param_4;
LAB_00d2cab0:
        *(undefined8 *)((long)pvVar1 + 0x2c8) = 0;
        *(undefined *)((long)pvVar1 + 0x37c) = 0x21;
        *(undefined8 *)((long)pvVar1 + 0x2b8) = 0;
        *(undefined8 *)((long)pvVar1 + 0x240) = 0;
        *(undefined8 *)((long)pvVar1 + 0x2f0) = 0;
        *(undefined8 *)((long)pvVar1 + 0x2e8) = 0;
        *(undefined4 *)((long)pvVar1 + 0x378) = 0;
        *(undefined8 *)((long)pvVar1 + 0x370) = 0;
        *(undefined8 *)((long)pvVar1 + 0xf8) = 0;
        *(undefined8 *)((long)pvVar1 + 0x1e0) = 0;
        *(undefined2 *)((long)pvVar1 + 0x1c8) = 0;
        *(undefined8 *)((long)pvVar1 + 0x1c0) = 0;
        *(undefined8 *)((long)pvVar1 + 0x318) = 0;
        *(undefined8 *)((long)pvVar1 + 0x310) = 0;
        *(undefined8 *)((long)pvVar1 + 0x328) = 0;
        *(undefined8 *)((long)pvVar1 + 800) = 0;
        *(undefined8 *)((long)pvVar1 + 0x330) = 0;
        *(undefined *)((long)pvVar1 + 0x2f8) = 0;
        *(code ***)((long)pvVar1 + 0x338) = ppcVar5;
        *(undefined8 *)((long)pvVar1 + 0x360) = 0;
        *(undefined8 *)((long)pvVar1 + 0x348) = 0;
        *(undefined8 *)((long)pvVar1 + 0x340) = 0;
        *(undefined8 *)((long)pvVar1 + 0x358) = 0;
        *(undefined8 *)((long)pvVar1 + 0x350) = 0;
        *(code ***)((long)pvVar1 + 0x368) = ppcVar5;
        FUN_00d2cf98(pvVar1,param_1);
        if ((param_1 != 0) && (*(long *)((long)pvVar1 + 0x1c0) == 0)) {
          XML_ParserFree(pvVar1);
          return (void *)0x0;
        }
        if (param_3 != (undefined *)0x0) {
          *(undefined *)((long)pvVar1 + 0x1c8) = 1;
          uVar4 = XmlGetUtf8InternalEncodingNS();
          *(undefined8 *)((long)pvVar1 + 0x1b8) = uVar4;
          *(undefined *)((long)pvVar1 + 0x37c) = *param_3;
          return pvVar1;
        }
        uVar4 = XmlGetUtf8InternalEncoding();
        *(undefined8 *)((long)pvVar1 + 0x1b8) = uVar4;
        return pvVar1;
      }
      puVar3 = (undefined8 *)(**ppcVar5)(0x168);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[0x18] = 0;
        puVar3[0x19] = ppcVar5;
        puVar3[0x1e] = 0;
        puVar3[0x1f] = ppcVar5;
        *(undefined *)(puVar3 + 1) = 0;
        puVar3[0x2a] = 0;
        puVar3[0x29] = 0;
        puVar3[0x2c] = 0;
        puVar3[0x2b] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
        puVar3[0x17] = 0;
        puVar3[0x16] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1c] = 0;
        *puVar3 = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined *)(puVar3 + 6) = 0;
        puVar3[4] = ppcVar5;
        puVar3[5] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        *(undefined *)(puVar3 + 0xb) = 0;
        puVar3[9] = ppcVar5;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined *)(puVar3 + 0x10) = 0;
        puVar3[0xe] = ppcVar5;
        puVar3[0xf] = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = ppcVar5;
        *(undefined2 *)((long)puVar3 + 0x102) = 0;
        *(undefined *)(puVar3 + 0x22) = 0;
        puVar3[0x21] = 0;
        puVar3[0x23] = 0;
        puVar3[0x24] = 0;
        puVar3[0x25] = ppcVar5;
        puVar3[0x26] = 0;
        puVar3[0x27] = 0;
        *(undefined *)(puVar3 + 0x28) = 0;
        *(undefined2 *)(puVar3 + 0x20) = 1;
        *(undefined8 **)((long)pvVar1 + 0x2a0) = puVar3;
        goto LAB_00d2cab0;
      }
      *(undefined8 *)((long)pvVar1 + 0x2a0) = 0;
      (**(code **)((long)pvVar1 + 0x28))(*(undefined8 *)((long)pvVar1 + 0x58));
    }
    (**(code **)((long)pvVar1 + 0x28))(*(undefined8 *)((long)pvVar1 + 0x2e0));
  }
  (**(code **)((long)pvVar1 + 0x28))(pvVar1);
  return (void *)0x0;
}


