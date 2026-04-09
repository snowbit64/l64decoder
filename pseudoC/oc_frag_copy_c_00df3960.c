// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_frag_copy_c
// Entry Point: 00df3960
// Size: 120 bytes
// Signature: undefined oc_frag_copy_c(void)


void oc_frag_copy_c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = (long)param_3;
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)(undefined8 *)((long)param_2 + lVar4) + lVar4);
  *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
  puVar2 = (undefined8 *)((long)(undefined8 *)((long)param_1 + lVar4) + lVar4);
  puVar3 = (undefined8 *)((long)puVar1 + lVar4);
  *puVar2 = *puVar1;
  puVar2 = (undefined8 *)((long)puVar2 + lVar4);
  puVar1 = (undefined8 *)((long)puVar3 + lVar4);
  *puVar2 = *puVar3;
  puVar2 = (undefined8 *)((long)puVar2 + lVar4);
  puVar3 = (undefined8 *)((long)puVar1 + lVar4);
  *puVar2 = *puVar1;
  puVar2 = (undefined8 *)((long)puVar2 + lVar4);
  puVar1 = (undefined8 *)((long)puVar3 + lVar4);
  *puVar2 = *puVar3;
  puVar2 = (undefined8 *)((long)puVar2 + lVar4);
  *puVar2 = *puVar1;
  *(undefined8 *)((long)puVar2 + lVar4) = *(undefined8 *)((long)puVar1 + lVar4);
  return;
}


