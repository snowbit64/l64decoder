// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRemappedField
// Entry Point: 00c51eb8
// Size: 636 bytes
// Signature: undefined __cdecl getRemappedField(char * param_1, bool param_2)


/* IR_Struct::getRemappedField(char const*, bool) */

void IR_Struct::getRemappedField(char *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *__s2;
  ulong in_x2;
  ulong *in_x8;
  int *piVar9;
  undefined *puVar10;
  StructFieldRemapping *this;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  char acStack_168 [256];
  long local_68;
  
  __s2 = (char *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = *(StructFieldRemapping **)(param_1 + 0x48);
  if (this != (StructFieldRemapping *)0x0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) - lVar6 != 0) {
      uVar12 = 0;
      uVar13 = (*(long *)(param_1 + 0x38) - lVar6 >> 3) * 0x6db6db6db6db6db7;
      do {
        iVar3 = strcmp(*(char **)(lVar6 + uVar12 * 0x38),__s2);
        if (iVar3 == 0) {
          plVar4 = (long *)StructFieldRemapping::getRemapping(this,(uint)uVar12);
          if ((plVar4 != (long *)0x0) && (*(int *)(plVar4 + 4) != 0)) {
            FUN_00c4ef5c(acStack_168,0x100,"texcoord%u",*(undefined4 *)((long)plVar4 + 0xc));
            piVar9 = *(int **)(lVar6 + uVar12 * 0x38 + 0x10);
            iVar3 = *piVar9;
            if (iVar3 == 0) {
              uVar11 = 1;
            }
            else {
              if (iVar3 != 1) goto LAB_00c52098;
              uVar11 = piVar9[5];
            }
            lVar6 = __strlen_chk(acStack_168,0x100);
            pcVar7 = acStack_168 + lVar6;
            if ((in_x2 & 1) == 0) {
              plVar1 = plVar4;
              if ((long *)*plVar4 != (long *)0x0) {
                plVar1 = (long *)*plVar4;
              }
              pcVar8 = pcVar7;
              if (1 < *(uint *)(plVar1 + 4)) {
                pcVar8 = acStack_168 + lVar6 + 1;
                *pcVar7 = '.';
                if (uVar11 != 0) {
                  uVar12 = (ulong)uVar11;
                  pcVar7 = pcVar8;
                  plVar4 = plVar4 + 2;
                  do {
                    uVar12 = uVar12 - 1;
                    pcVar8 = pcVar7 + 1;
                    *pcVar7 = (&DAT_004eba8b)[*(uint *)plVar4];
                    pcVar7 = pcVar8;
                    plVar4 = (long *)((long)plVar4 + 4);
                  } while (uVar12 != 0);
                }
              }
              *pcVar8 = '\0';
LAB_00c52098:
              lVar6 = __strlen_chk(acStack_168,0x100);
              pcVar7 = acStack_168 + lVar6;
            }
            FUN_00c4ef5c(pcVar7,0xffffffffffffffff,"/*%s*/",__s2);
            sVar5 = strlen(acStack_168);
            if (0xffffffffffffffef < sVar5) goto LAB_00c52128;
            if (sVar5 < 0x17) {
              puVar10 = (undefined *)((long)in_x8 + 1);
              *(char *)in_x8 = (char)((int)sVar5 << 1);
              if (sVar5 != 0) goto LAB_00c5210c;
            }
            else {
              uVar12 = sVar5 + 0x10 & 0xfffffffffffffff0;
              puVar10 = (undefined *)operator_new(uVar12);
              in_x8[1] = sVar5;
              in_x8[2] = (ulong)puVar10;
              *in_x8 = uVar12 | 1;
LAB_00c5210c:
              memcpy(puVar10,acStack_168,sVar5);
            }
            puVar10[sVar5] = 0;
            goto LAB_00c52004;
          }
          break;
        }
        uVar12 = (ulong)((uint)uVar12 + 1);
      } while (uVar12 <= uVar13 && uVar13 - uVar12 != 0);
    }
  }
  sVar5 = strlen(__s2);
  if (0xffffffffffffffef < sVar5) {
LAB_00c52128:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    puVar10 = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)sVar5 << 1);
    if (sVar5 == 0) goto LAB_00c52000;
  }
  else {
    uVar12 = sVar5 + 0x10 & 0xfffffffffffffff0;
    puVar10 = (undefined *)operator_new(uVar12);
    in_x8[1] = sVar5;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar12 | 1;
  }
  memcpy(puVar10,__s2,sVar5);
LAB_00c52000:
  puVar10[sVar5] = 0;
LAB_00c52004:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


