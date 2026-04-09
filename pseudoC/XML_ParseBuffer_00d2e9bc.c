// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ParseBuffer
// Entry Point: 00d2e9bc
// Size: 436 bytes
// Signature: undefined XML_ParseBuffer(void)


undefined4 XML_ParseBuffer(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  __pid_t _Var5;
  undefined4 uVar6;
  undefined4 uVar7;
  timeval tStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    uVar7 = 0;
    goto LAB_00d2eb40;
  }
  iVar4 = *(int *)(param_1 + 0x388);
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      uVar6 = 0x24;
    }
    else {
      if (iVar4 != 3) goto LAB_00d2ea30;
      uVar6 = 0x21;
    }
LAB_00d2ea1c:
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x218) = uVar6;
    goto LAB_00d2eb40;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    if (*(long *)(param_1 + 0x398) == 0) {
      gettimeofday(&tStack_58,(__timezone_ptr_t)0x0);
      _Var5 = getpid();
      *(__suseconds_t *)(param_1 + 0x398) =
           ((tStack_58.tv_usec ^ _Var5) << 0x3d) - (tStack_58.tv_usec ^ _Var5);
    }
    if ((*(char *)(param_1 + 0x1c8) != '\0') &&
       (cVar3 = FUN_00d2d7e8(param_1,"xml=http://www.w3.org/XML/1998/namespace"), cVar3 == '\0')) {
      uVar6 = 1;
      goto LAB_00d2ea1c;
    }
  }
LAB_00d2ea30:
  lVar1 = *(long *)(param_1 + 0x38) + (long)param_2;
  *(undefined4 *)(param_1 + 0x388) = 1;
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x38) = lVar1;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)param_2;
  *(long *)(param_1 + 0x50) = lVar1;
  *(char *)(param_1 + 0x38c) = (char)param_3;
  iVar4 = (**(code **)(param_1 + 0x210))(param_1);
  *(int *)(param_1 + 0x218) = iVar4;
  if (iVar4 != 0) {
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x220);
    *(code **)(param_1 + 0x210) = FUN_00d2e718;
    goto LAB_00d2eb40;
  }
  if (*(uint *)(param_1 + 0x388) < 2) {
    if (param_3 != 0) {
      uVar7 = 1;
      *(undefined4 *)(param_1 + 0x388) = 2;
      goto LAB_00d2eb40;
    }
LAB_00d2eb1c:
    uVar7 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x388) != 3) goto LAB_00d2eb1c;
    uVar7 = 2;
  }
  (**(code **)(*(long *)(param_1 + 0x120) + 0x60))
            (*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x230),
             *(undefined8 *)(param_1 + 0x30),param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x30);
LAB_00d2eb40:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


