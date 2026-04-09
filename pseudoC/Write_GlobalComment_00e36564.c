// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write_GlobalComment
// Entry Point: 00e36564
// Size: 228 bytes
// Signature: undefined Write_GlobalComment(void)


int Write_GlobalComment(long param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined2 local_50 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == (char *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = 0;
    uVar8 = 0;
    local_50[0] = 0;
  }
  else {
    sVar2 = strlen(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = sVar2 & 0xffffffff;
    uVar8 = (uint)sVar2;
    local_50[0] = (undefined2)sVar2;
    if (0xffff < uVar8) {
      uVar8 = 1;
      local_50[0] = 0xffff;
    }
  }
  lVar3 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar5,local_50,2);
  uVar6 = (uint)(lVar3 != 2);
  if ((lVar3 == 2) && (uVar8 != 0)) {
    uVar4 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),param_2,uVar7
                      );
    uVar6 = (uint)(uVar4 != uVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return -uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


