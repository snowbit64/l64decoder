// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__scan_buffer
// Entry Point: 00c218ac
// Size: 284 bytes
// Signature: undefined __cdecl gsParser__scan_buffer(char * param_1, uint param_2, void * param_3)


/* gsParser__scan_buffer(char*, unsigned int, void*) */

undefined8 * gsParser__scan_buffer(char *param_1,uint param_2,void *param_3)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  
  uVar2 = param_2 - 2;
  if (((param_2 < 2) || (param_1[uVar2] != '\0')) || (param_1[param_2 - 1] != '\0')) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)malloc(0x40);
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c21450("out of dynamic memory in yy_scan_buffer()");
    }
    puVar8[1] = param_1;
    puVar8[2] = param_1;
    *(uint *)((long)puVar8 + 0x1c) = uVar2;
    *(undefined4 *)(puVar8 + 4) = 0;
    *puVar8 = 0;
    *(uint *)(puVar8 + 3) = uVar2;
    *(undefined4 *)((long)puVar8 + 0x34) = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *(undefined8 *)((long)puVar8 + 0x24) = 0x100000000;
    FUN_00c209fc(param_3);
    lVar3 = *(long *)((long)param_3 + 0x18);
    lVar5 = *(long *)((long)param_3 + 0x28);
    puVar6 = *(undefined8 **)(lVar5 + lVar3 * 8);
    if (puVar6 != puVar8) {
      if (puVar6 != (undefined8 *)0x0) {
        **(undefined **)((long)param_3 + 0x40) = *(undefined *)((long)param_3 + 0x30);
        lVar3 = *(long *)((long)param_3 + 0x18);
        lVar5 = *(long *)((long)param_3 + 0x28);
        *(undefined8 *)(*(long *)(lVar5 + lVar3 * 8) + 0x10) = *(undefined8 *)((long)param_3 + 0x40)
        ;
        *(undefined4 *)(*(long *)(lVar5 + lVar3 * 8) + 0x1c) = *(undefined4 *)((long)param_3 + 0x34)
        ;
      }
      lVar3 = lVar3 * 8;
      *(undefined8 **)(lVar5 + lVar3) = puVar8;
      lVar5 = *(long *)(*(long *)((long)param_3 + 0x28) + lVar3);
      puVar7 = *(undefined **)(lVar5 + 0x10);
      *(undefined **)((long)param_3 + 0x40) = puVar7;
      *(undefined **)((long)param_3 + 0x80) = puVar7;
      uVar4 = **(undefined8 **)(*(long *)((long)param_3 + 0x28) + lVar3);
      *(undefined4 *)((long)param_3 + 0x34) = *(undefined4 *)(lVar5 + 0x1c);
      *(undefined8 *)((long)param_3 + 8) = uVar4;
      uVar1 = *puVar7;
      *(undefined4 *)((long)param_3 + 0x50) = 1;
      *(undefined *)((long)param_3 + 0x30) = uVar1;
    }
  }
  return puVar8;
}


