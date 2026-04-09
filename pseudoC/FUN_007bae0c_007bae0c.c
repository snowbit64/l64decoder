// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bae0c
// Entry Point: 007bae0c
// Size: 132 bytes
// Signature: undefined FUN_007bae0c(void)


void FUN_007bae0c(AnimalHusbandry *param_1,AREA_TYPE *param_2)

{
  long lVar1;
  AREA_TYPE AVar2;
  AREA_TYPE local_40;
  AREA_TYPE AStack_3c;
  AREA_TYPE local_38;
  AREA_TYPE AStack_34;
  AREA_TYPE local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2[4];
  AStack_34 = param_2[8];
  local_30 = param_2[0xc];
  local_40 = param_2[0x14];
  AStack_3c = param_2[0x18];
  AVar2 = AnimalHusbandry::addArea
                    (param_1,*param_2,(Vector3 *)&local_38,(float)param_2[0x10],(Vector2 *)&local_40
                    );
  param_2[0x40] = AVar2;
  param_2[0x42] = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


