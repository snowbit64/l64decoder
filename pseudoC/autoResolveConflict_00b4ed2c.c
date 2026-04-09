// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: autoResolveConflict
// Entry Point: 00b4ed2c
// Size: 244 bytes
// Signature: undefined __thiscall autoResolveConflict(CloudCallbacks * this, ICloudDevice * param_1, char * param_2, char * * param_3, char * * param_4, bool * param_5)


/* GenericSaveGameUtil::CloudCallbacks::autoResolveConflict(ICloudDevice*, char const*, char
   const*&, char const*&, bool&) */

void __thiscall
GenericSaveGameUtil::CloudCallbacks::autoResolveConflict
          (CloudCallbacks *this,ICloudDevice *param_1,char *param_2,char **param_3,char **param_4,
          bool *param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*param_4 == (char *)0x0) goto LAB_00b4edf8;
  if (*param_3 == (char *)0x0) {
LAB_00b4edb4:
    iVar4 = (**(code **)(*(long *)param_1 + 0x60))(param_1,s_pCloudSession,param_2,&local_40);
    if (iVar4 != 0) goto LAB_00b4edf8;
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
    *param_3 = *param_4;
  }
  else {
    cVar1 = **param_3;
    cVar2 = **param_4;
    if (*param_5 != false) {
      if ((cVar2 != '\0') && (cVar1 != '\0')) goto LAB_00b4edf8;
      goto LAB_00b4edb4;
    }
    if (cVar1 == '\0') goto LAB_00b4edb4;
    if ((cVar2 != '\0') ||
       (iVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1,s_pCloudSession), iVar4 != 0))
    goto LAB_00b4edf8;
  }
  *param_4 = (char *)0x0;
  *param_5 = false;
LAB_00b4edf8:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


