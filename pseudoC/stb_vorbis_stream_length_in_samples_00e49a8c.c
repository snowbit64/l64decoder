// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_stream_length_in_samples
// Entry Point: 00e49a8c
// Size: 1104 bytes
// Signature: undefined stb_vorbis_stream_length_in_samples(void)


void stb_vorbis_stream_length_in_samples(long param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int local_58;
  uint local_54;
  undefined4 local_50;
  undefined2 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    *(undefined4 *)(param_1 + 0x9c) = 2;
    iVar5 = 0;
    goto LAB_00e49e54;
  }
  iVar6 = *(int *)(param_1 + 0x374);
  if (iVar6 == 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar7 = ftell(*(FILE **)(param_1 + 0x30));
      uVar12 = (int)lVar7 - *(int *)(param_1 + 0x38);
    }
    else {
      uVar12 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
    }
    if (*(uint *)(param_1 + 0x58) >> 0x10 == 0) {
      uVar11 = *(uint *)(param_1 + 0x60);
LAB_00e49b24:
      cVar2 = *(char *)(param_1 + 0x5c);
      uVar3 = uVar11;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x60);
      uVar3 = *(uint *)(param_1 + 0x58) - 0x10000;
      if (uVar3 < uVar11) goto LAB_00e49b24;
      cVar2 = *(char *)(param_1 + 0x5c);
    }
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar9 = (ulong)(*(uint *)(param_1 + 0x38) + uVar3);
        if (((int)uVar3 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar3) != false)) {
          uVar9 = 0x7fffffff;
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
        iVar5 = fseek(*(FILE **)(param_1 + 0x30),uVar9,0);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
        }
      }
      else {
        uVar9 = *(long *)(param_1 + 0x48) + (ulong)uVar3;
        if (uVar9 < *(ulong *)(param_1 + 0x50)) {
          *(ulong *)(param_1 + 0x40) = uVar9;
        }
        else {
          *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
    }
    iVar5 = FUN_00e49edc(param_1,&local_54,&local_58);
    if (iVar5 == 0) {
LAB_00e49d8c:
      *(undefined4 *)(param_1 + 0x9c) = 0x24;
      *(undefined4 *)(param_1 + 0x374) = 0xffffffff;
      cVar2 = *(char *)(param_1 + 0x5c);
    }
    else {
      if (*(char *)(param_1 + 0x5c) == '\0') {
        if (*(long *)(param_1 + 0x40) == 0) {
          lVar7 = ftell(*(FILE **)(param_1 + 0x30));
          uVar11 = (int)lVar7 - *(int *)(param_1 + 0x38);
        }
        else {
          uVar11 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
        }
      }
      else {
        uVar11 = 0;
      }
      while (local_58 == 0) {
        if (*(char *)(param_1 + 0x5c) == '\0') {
          *(undefined4 *)(param_1 + 0x98) = 0;
          if (*(long *)(param_1 + 0x40) == 0) {
            uVar9 = (ulong)(*(uint *)(param_1 + 0x38) + local_54);
            if (((int)local_54 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),local_54) != false)) {
              uVar9 = 0x7fffffff;
              *(undefined4 *)(param_1 + 0x98) = 1;
            }
            iVar5 = fseek(*(FILE **)(param_1 + 0x30),uVar9,0);
            if (iVar5 != 0) {
              *(undefined4 *)(param_1 + 0x98) = 1;
              fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
            }
          }
          else {
            uVar9 = *(long *)(param_1 + 0x48) + (ulong)local_54;
            if (uVar9 < *(ulong *)(param_1 + 0x50)) {
              *(ulong *)(param_1 + 0x40) = uVar9;
            }
            else {
              *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
              *(undefined4 *)(param_1 + 0x98) = 1;
            }
          }
        }
        iVar5 = FUN_00e49edc(param_1,&local_54,&local_58);
        if (iVar5 == 0) break;
        if (*(char *)(param_1 + 0x5c) == '\0') {
          if (*(long *)(param_1 + 0x40) == 0) {
            lVar7 = ftell(*(FILE **)(param_1 + 0x30));
            uVar11 = (int)lVar7 - *(int *)(param_1 + 0x38);
          }
          else {
            uVar11 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
          }
        }
        else {
          uVar11 = 0;
        }
      }
      if (*(char *)(param_1 + 0x5c) == '\0') {
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(long *)(param_1 + 0x40) == 0) {
          uVar9 = (ulong)(*(uint *)(param_1 + 0x38) + uVar11);
          if (((int)uVar11 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar11) != false)) {
            uVar9 = 0x7fffffff;
            *(undefined4 *)(param_1 + 0x98) = 1;
          }
          iVar5 = fseek(*(FILE **)(param_1 + 0x30),uVar9,0);
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0x98) = 1;
            fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
          }
          goto LAB_00e49c08;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x50);
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)uVar11);
        if (puVar1 < puVar10) {
          *(undefined4 **)(param_1 + 0x40) = puVar1;
          puVar10 = puVar1;
        }
        else {
          *(undefined4 **)(param_1 + 0x40) = puVar10;
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
      else {
LAB_00e49c08:
        puVar10 = *(undefined4 **)(param_1 + 0x40);
      }
      if (puVar10 == (undefined4 *)0x0) {
        sVar8 = fread(&local_50,6,1,*(FILE **)(param_1 + 0x30));
        if (sVar8 != 1) {
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
      else if (*(ulong *)(param_1 + 0x50) < (long)puVar10 + 6U) {
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      else {
        local_50 = *puVar10;
        local_4c = *(undefined2 *)(puVar10 + 1);
        *(ulong *)(param_1 + 0x40) = (long)puVar10 + 6U;
      }
      iVar5 = FUN_00e4a434(param_1);
      iVar6 = FUN_00e4a434(param_1);
      if ((iVar5 == -1) && (iVar6 == -1)) goto LAB_00e49d8c;
      if (iVar6 != 0) {
        iVar5 = -2;
      }
      *(uint *)(param_1 + 0x70) = uVar11;
      *(uint *)(param_1 + 0x74) = local_54;
      *(int *)(param_1 + 0x374) = iVar5;
      *(int *)(param_1 + 0x78) = iVar5;
      cVar2 = *(char *)(param_1 + 0x5c);
    }
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar9 = (ulong)(*(uint *)(param_1 + 0x38) + uVar12);
        if (((int)uVar12 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar12) != false)) {
          uVar9 = 0x7fffffff;
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
        iVar5 = fseek(*(FILE **)(param_1 + 0x30),uVar9,0);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
        }
      }
      else {
        uVar9 = *(long *)(param_1 + 0x48) + (ulong)uVar12;
        if (uVar9 < *(ulong *)(param_1 + 0x50)) {
          *(ulong *)(param_1 + 0x40) = uVar9;
        }
        else {
          *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x374);
  }
  iVar5 = 0;
  if (iVar6 != -1) {
    iVar5 = iVar6;
  }
LAB_00e49e54:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


