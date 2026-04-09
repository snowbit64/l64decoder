// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_sCAL
// Entry Point: 00dbeba8
// Size: 636 bytes
// Signature: undefined png_handle_sCAL(void)


void png_handle_sCAL(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  byte *__s;
  ulong uVar5;
  ulong uVar6;
  uint local_54;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  uVar5 = (ulong)param_3;
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 9) >> 6 & 1) == 0)) {
      if (param_3 < 4) {
        png_crc_finish(param_1,uVar5);
        pcVar4 = "invalid";
      }
      else {
        __s = *(byte **)(param_1 + 0x498);
        uVar6 = (ulong)(param_3 + 1);
        if (__s == (byte *)0x0) {
LAB_00dbec54:
          __s = (byte *)png_malloc_base(param_1,uVar6);
          if (__s == (byte *)0x0) {
            png_chunk_benign_error(param_1,"out of memory");
            png_crc_finish(param_1,uVar5);
            goto LAB_00dbed2c;
          }
          memset(__s,0,uVar6);
          *(byte **)(param_1 + 0x498) = __s;
          *(ulong *)(param_1 + 0x4a0) = uVar6;
        }
        else if (*(ulong *)(param_1 + 0x4a0) < uVar6) {
          *(undefined8 *)(param_1 + 0x498) = 0;
          *(undefined8 *)(param_1 + 0x4a0) = 0;
          png_free(param_1,__s);
          goto LAB_00dbec54;
        }
        png_read_data(param_1,__s,uVar5);
        png_calculate_crc(param_1,__s,uVar5);
        __s[uVar5] = 0;
        iVar3 = png_crc_finish(param_1,0);
        if (iVar3 != 0) goto LAB_00dbed2c;
        if (*__s - 1 < 2) {
          local_54 = 0;
          local_50 = 1;
          iVar3 = png_check_fp_number(__s,uVar5,&local_54,&local_50);
          if ((iVar3 != 0) && (local_50 < uVar5)) {
            uVar6 = local_50 + 1;
            pbVar1 = __s + local_50;
            local_50 = uVar6;
            if (*pbVar1 == 0) {
              if ((local_54 & 0x188) == 0x108) {
                local_54 = 0;
                iVar3 = png_check_fp_number(__s,uVar5,&local_54,&local_50);
                if ((iVar3 == 0) || (local_50 != uVar5)) {
                  pcVar4 = "bad height format";
                }
                else {
                  if ((local_54 & 0x188) == 0x108) {
                    png_set_sCAL_s(param_1,param_2,*__s,__s + 1,__s + uVar6);
                    goto LAB_00dbed2c;
                  }
                  pcVar4 = "non-positive height";
                }
              }
              else {
                pcVar4 = "non-positive width";
              }
              goto LAB_00dbed24;
            }
          }
          pcVar4 = "bad width format";
        }
        else {
          pcVar4 = "invalid unit";
        }
      }
    }
    else {
      png_crc_finish(param_1,uVar5);
      pcVar4 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,uVar5);
    pcVar4 = "out of place";
  }
LAB_00dbed24:
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbed2c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


