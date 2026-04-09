// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_seek_frame
// Entry Point: 00e48a50
// Size: 2488 bytes
// Signature: undefined stb_vorbis_seek_frame(void)


void stb_vorbis_seek_frame(long param_1,uint param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint local_d4;
  uint local_d0;
  int local_cc;
  undefined auStack_c8 [4];
  int local_c4;
  undefined auStack_c0 [4];
  int local_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint local_9c;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar14 = 2;
    goto LAB_00e48a98;
  }
  uVar6 = stb_vorbis_stream_length_in_samples(param_1);
  if (uVar6 == 0) {
    uVar14 = 7;
    goto LAB_00e48a98;
  }
  if (uVar6 < param_2) {
    uVar14 = 0xb;
    goto LAB_00e48a98;
  }
  local_a0 = *(uint *)(param_1 + 0x6c);
  puVar1 = (undefined4 *)(param_1 + 0x98);
  puVar2 = (ulong *)(param_1 + 0x40);
  local_a8 = *(ulong *)(param_1 + 100);
  uVar6 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
  uVar16 = 0;
  if (uVar6 <= param_2) {
    uVar16 = param_2 - uVar6;
  }
  do {
    if (local_a0 != 0xffffffff) {
      if (uVar16 <= local_a0) {
        iVar7 = stb_vorbis_seek_start(param_1);
        goto joined_r0x00e48db4;
      }
      uVar6 = *(uint *)(param_1 + 0x70);
      if (uVar6 == local_a8._4_4_) goto LAB_00e48be4;
      dVar22 = 0.0;
      dVar23 = 0.0;
      uVar11 = 0;
      local_d0 = *(uint *)(param_1 + 0x74);
      local_d4 = *(uint *)(param_1 + 0x78);
      uVar18 = local_a8._4_4_;
      uVar13 = local_d4;
      goto LAB_00e4900c;
    }
    if (*(char *)(param_1 + 0x5c) == '\0') {
      *puVar1 = 0;
      if (*puVar2 == 0) {
        uVar10 = (ulong)(*(uint *)(param_1 + 0x38) + local_a8._4_4_);
        if (((long)local_a8 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),local_a8._4_4_) != false)) {
          uVar10 = 0x7fffffff;
          *puVar1 = 1;
        }
        iVar7 = fseek(*(FILE **)(param_1 + 0x30),uVar10,0);
        if (iVar7 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
        }
      }
      else {
        uVar10 = *(long *)(param_1 + 0x48) + (ulong)local_a8._4_4_;
        if (uVar10 < *(ulong *)(param_1 + 0x50)) {
          *puVar2 = uVar10;
        }
        else {
          *puVar2 = *(ulong *)(param_1 + 0x50);
          *puVar1 = 1;
        }
      }
    }
    iVar7 = FUN_00e5031c(param_1,&local_a8);
  } while (iVar7 != 0);
LAB_00e492c4:
  stb_vorbis_seek_start(param_1);
  goto LAB_00e492cc;
LAB_00e48d60:
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*puVar2 == 0) {
      lVar9 = ftell(*(FILE **)(param_1 + 0x30));
      uVar10 = (ulong)(uint)((int)lVar9 - *(int *)(param_1 + 0x38));
    }
    else {
      uVar10 = (ulong)(uint)((int)*puVar2 - *(int *)(param_1 + 0x48));
    }
  }
  else {
    uVar10 = 0;
  }
  iVar7 = FUN_00e4ca1c(param_1);
  if (iVar7 == 0) goto LAB_00e492c4;
  uVar6 = *(int *)(param_1 + 0x5e0) - 1;
  goto LAB_00e48c04;
  while (uVar11 = uVar11 + 1, uVar13 = local_b0, uVar6 != uVar18) {
LAB_00e4900c:
    uVar4 = uVar6 - uVar18;
    if (uVar4 < 0x10001) {
      if (*(char *)(param_1 + 0x5c) == '\0') {
        *puVar1 = 0;
        if (*puVar2 == 0) {
          uVar10 = (ulong)(*(uint *)(param_1 + 0x38) + uVar18);
          if ((int)uVar18 < 0) goto LAB_00e491bc;
          if (CARRY4(*(uint *)(param_1 + 0x38),uVar18) == false) goto LAB_00e491c8;
          goto LAB_00e491bc;
        }
        uVar10 = *(long *)(param_1 + 0x48) + (ulong)uVar18;
        if (*(ulong *)(param_1 + 0x50) <= uVar10) {
          *puVar2 = *(ulong *)(param_1 + 0x50);
          goto LAB_00e491f4;
        }
        *puVar2 = uVar10;
      }
    }
    else {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          dVar22 = (double)(ulong)(local_d0 - (uint)local_a8) / (double)(ulong)local_d4;
          dVar23 = (double)NEON_fmadd(dVar22,(double)(ulong)(uVar16 - local_a0),
                                      (double)(local_a8 & 0xffffffff));
        }
        else {
          dVar20 = ((double)(ulong)uVar16 - (double)(ulong)uVar13) * dVar22;
          dVar21 = 8000.0;
          if (dVar20 < 0.0) {
            dVar21 = dVar20;
          }
          dVar20 = -8000.0;
          if (dVar21 <= -8000.0 || 0.0 <= dVar21) {
            dVar20 = dVar21;
          }
          dVar23 = (double)NEON_fmadd(dVar20,0x4000000000000000,dVar23);
        }
        dVar21 = (double)(ulong)uVar18;
        if ((double)(ulong)uVar18 <= dVar23) {
          dVar21 = dVar23;
        }
        dVar23 = (double)(ulong)(uVar6 - 0x10000);
        if (dVar21 <= (double)(ulong)(uVar6 - 0x10000)) {
          dVar23 = dVar21;
        }
        if (*(char *)(param_1 + 0x5c) == '\0') {
          uVar13 = (uint)dVar23;
          *puVar1 = 0;
          if (*puVar2 == 0) goto LAB_00e4912c;
LAB_00e490b0:
          uVar10 = *(long *)(param_1 + 0x48) + (ulong)uVar13;
          if (uVar10 < *(ulong *)(param_1 + 0x50)) {
            *puVar2 = uVar10;
          }
          else {
            *puVar2 = *(ulong *)(param_1 + 0x50);
            *puVar1 = 1;
          }
        }
      }
      else if (*(char *)(param_1 + 0x5c) == '\0') {
        uVar13 = (uVar18 + (uVar4 >> 1)) - 0x8000;
        *puVar1 = 0;
        if (*puVar2 != 0) goto LAB_00e490b0;
LAB_00e4912c:
        uVar10 = (ulong)(*(uint *)(param_1 + 0x38) + uVar13);
        if (((int)uVar13 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar13) != false)) {
          uVar10 = 0x7fffffff;
          *puVar1 = 1;
        }
        iVar7 = fseek(*(FILE **)(param_1 + 0x30),uVar10,0);
        if (iVar7 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
        }
      }
      iVar7 = FUN_00e49edc(param_1,0,0);
      if (iVar7 == 0) goto LAB_00e492c4;
    }
    while( true ) {
      iVar7 = FUN_00e5031c(param_1,&local_b8);
      if (iVar7 == 0) goto LAB_00e492c4;
      if (local_b0 != 0xffffffff) break;
      if (*(char *)(param_1 + 0x5c) == '\0') {
        *puVar1 = 0;
        if (*puVar2 == 0) {
          uVar10 = (ulong)(*(uint *)(param_1 + 0x38) + uStack_b4);
          if (((int)uStack_b4 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uStack_b4) != false)) {
LAB_00e491bc:
            uVar10 = 0x7fffffff;
            *puVar1 = 1;
          }
LAB_00e491c8:
          iVar7 = fseek(*(FILE **)(param_1 + 0x30),uVar10,0);
          if (iVar7 != 0) {
            *(undefined4 *)(param_1 + 0x98) = 1;
            fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
          }
        }
        else {
          uVar10 = *(long *)(param_1 + 0x48) + (ulong)uStack_b4;
          if (uVar10 < *(ulong *)(param_1 + 0x50)) {
            *puVar2 = uVar10;
          }
          else {
            *puVar2 = *(ulong *)(param_1 + 0x50);
LAB_00e491f4:
            *puVar1 = 1;
          }
        }
      }
    }
    if (local_b8 == uVar6) {
      if ((1 < uVar11) || (uVar4 < 0x10001)) break;
    }
    else if (uVar16 < local_b0) {
      local_d4 = local_b0;
      local_d0 = uStack_b4;
      uVar6 = local_b8;
    }
    else {
      local_a8 = CONCAT44(uStack_b4,local_b8);
      local_a0 = local_b0;
      uVar18 = uStack_b4;
    }
  }
LAB_00e48be4:
  uVar10 = local_a8 & 0xffffffff;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *puVar1 = 0;
    if (*puVar2 == 0) {
      uVar19 = (ulong)(*(uint *)(param_1 + 0x38) + (uint)local_a8);
      if (((int)(uint)local_a8 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),(uint)local_a8) != false))
      {
        uVar19 = 0x7fffffff;
        *puVar1 = 1;
      }
      iVar7 = fseek(*(FILE **)(param_1 + 0x30),uVar19,0);
      if (iVar7 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
      }
    }
    else {
      uVar19 = *(long *)(param_1 + 0x48) + uVar10;
      if (uVar19 < *(ulong *)(param_1 + 0x50)) {
        *puVar2 = uVar19;
      }
      else {
        *puVar2 = *(ulong *)(param_1 + 0x50);
        *puVar1 = 1;
      }
    }
  }
  iVar7 = FUN_00e4ca1c(param_1);
  if (iVar7 != 0) {
    uVar6 = *(uint *)(param_1 + 0x700);
LAB_00e48c04:
    uVar19 = (ulong)uVar6;
    while (uVar15 = uVar19, iVar7 = (int)uVar15, 0 < iVar7) {
      uVar19 = uVar15 - 1;
      if (*(char *)(param_1 + uVar15 + 0x5e3) != -1) goto LAB_00e492e4;
    }
    if ((*(byte *)(param_1 + 0x6e3) & 1) != 0) {
      uVar6 = (uint)uVar10;
      if ((uVar10 & 0xffff0000) == 0) {
        uVar16 = *(uint *)(param_1 + 0x60);
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x60);
        uVar11 = uVar6 - 0x10000;
        if (uVar16 <= uVar11) goto LAB_00e48c58;
      }
      uVar11 = uVar16;
LAB_00e48c58:
      if (*(char *)(param_1 + 0x5c) == '\0') {
        *puVar1 = 0;
        if (*puVar2 == 0) goto LAB_00e48c84;
        uVar19 = *(ulong *)(param_1 + 0x50);
        uVar10 = *(long *)(param_1 + 0x48) + (ulong)uVar11;
        if (uVar19 <= uVar10) goto LAB_00e48d54;
        *puVar2 = uVar10;
      }
LAB_00e48ce0:
      iVar7 = FUN_00e49edc(param_1,&local_9c,0);
      if (iVar7 == 0) goto LAB_00e492c4;
      if (uVar6 <= local_9c) {
        if (*(char *)(param_1 + 0x5c) == '\0') {
          if (*puVar2 == 0) {
            lVar9 = ftell(*(FILE **)(param_1 + 0x30));
            uVar16 = (int)lVar9 - *(int *)(param_1 + 0x38);
          }
          else {
            uVar16 = (int)*puVar2 - *(int *)(param_1 + 0x48);
          }
        }
        else {
          uVar16 = 0;
        }
        if (uVar16 < uVar6) goto LAB_00e48d60;
      }
      if (*(char *)(param_1 + 0x5c) == '\0') {
        *puVar1 = 0;
        uVar11 = local_9c;
        if (*puVar2 == 0) {
LAB_00e48c84:
          uVar10 = (ulong)(*(uint *)(param_1 + 0x38) + uVar11);
          if (((int)uVar11 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar11) != false)) {
            uVar10 = 0x7fffffff;
            *puVar1 = 1;
          }
          iVar7 = fseek(*(FILE **)(param_1 + 0x30),uVar10,0);
          if (iVar7 != 0) {
            *(undefined4 *)(param_1 + 0x98) = 1;
            fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
          }
        }
        else {
          uVar19 = *(ulong *)(param_1 + 0x50);
          uVar10 = *(long *)(param_1 + 0x48) + (ulong)local_9c;
          if (uVar10 < uVar19) {
            *puVar2 = uVar10;
          }
          else {
LAB_00e48d54:
            *puVar2 = uVar19;
            *puVar1 = 1;
          }
        }
      }
      goto LAB_00e48ce0;
    }
LAB_00e492e4:
    *(undefined4 *)(param_1 + 0x584) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    *(undefined *)(param_1 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(int *)(param_1 + 0x6e8) = iVar7;
    if (0 < iVar7) {
      uVar10 = 0;
      do {
        uVar19 = (ulong)*(byte *)(param_1 + 0x5e4 + uVar10);
        if (*puVar2 == 0) {
          lVar9 = ftell(*(FILE **)(param_1 + 0x30));
          fseek(*(FILE **)(param_1 + 0x30),lVar9 + uVar19,0);
        }
        else {
          uVar19 = *puVar2 + uVar19;
          *(ulong *)(param_1 + 0x40) = uVar19;
          if (*(ulong *)(param_1 + 0x50) <= uVar19) {
            *puVar1 = 1;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar15 != uVar10);
    }
    iVar7 = FUN_00e49408(param_1);
joined_r0x00e48db4:
    if (iVar7 == 0) {
      uVar8 = 0;
      goto LAB_00e48aa0;
    }
    uVar6 = *(uint *)(param_1 + 0x580);
    if (param_2 < uVar6) goto LAB_00e492cc;
    if (param_2 <= uVar6) {
LAB_00e492d4:
      if (uVar6 == param_2) {
LAB_00e492dc:
        uVar8 = 1;
        goto LAB_00e48aa0;
      }
      goto LAB_00e492cc;
    }
    iVar7 = *(int *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xac);
    while (uVar8 = FUN_00e4c234(param_1,&local_bc,auStack_c0,&local_c4,auStack_c8,&local_cc),
          (int)uVar8 != 0) {
      uVar6 = *(int *)(param_1 + 0x1f0) - 1;
      if (*(int *)(param_1 + 0x1f0) < 1) {
        iVar12 = 0;
      }
      else if (uVar6 >> 0xe == 0) {
        if (uVar6 < 0x10) {
          iVar12 = (int)(char)(&DAT_004c5180)[uVar6];
        }
        else if (uVar6 < 0x200) {
          iVar12 = (char)(&DAT_004c5180)[uVar6 >> 5] + 5;
        }
        else {
          iVar12 = (char)(&DAT_004c5180)[uVar6 >> 10] + 10;
        }
      }
      else if (uVar6 >> 0x18 == 0) {
        if (uVar6 >> 0x13 == 0) {
          iVar12 = (char)(&DAT_004c5180)[uVar6 >> 0xf] + 0xf;
        }
        else {
          iVar12 = (char)(&DAT_004c5180)[uVar6 >> 0x14] + 0x14;
        }
      }
      else if (uVar6 >> 0x1d == 0) {
        iVar12 = (char)(&DAT_004c5180)[uVar6 >> 0x19] + 0x19;
      }
      else {
        iVar12 = (char)(&DAT_004c5180)[uVar6 >> 0x1e] + 0x1e;
      }
      iVar17 = 3;
      if (*(char *)(param_1 + (long)local_cc * 6 + 500) == '\0') {
        iVar17 = 1;
      }
      uVar6 = iVar12 + iVar17 + 7;
      iVar12 = (int)(uVar6 + ((uVar6 & 0xe000) >> 0xd)) >> 3;
      *(char *)(param_1 + 0x6e4) = *(char *)(param_1 + 0x6e4) + (char)iVar12;
      *(int *)(param_1 + 0x6fc) = *(int *)(param_1 + 0x6fc) - iVar12;
      if (*(long *)(param_1 + 0x40) == 0) {
        lVar9 = ftell(*(FILE **)(param_1 + 0x30));
        fseek(*(FILE **)(param_1 + 0x30),lVar9 + -iVar12,0);
      }
      else {
        uVar10 = *(long *)(param_1 + 0x40) + (long)-iVar12;
        *(ulong *)(param_1 + 0x40) = uVar10;
        if (*(ulong *)(param_1 + 0x50) <= uVar10) {
          *puVar1 = 1;
        }
      }
      iVar12 = *(int *)(param_1 + 0x6e8);
      if (iVar12 == -1) {
        iVar12 = *(int *)(param_1 + 0x5e0);
      }
      *(undefined4 *)(param_1 + 0x6f8) = 0;
      *(int *)(param_1 + 0x6e8) = iVar12 + -1;
      uVar6 = *(int *)(param_1 + 0x580) + (local_c4 - local_bc);
      if (param_2 < uVar6) goto LAB_00e492dc;
      if (param_2 < uVar6 + (iVar3 * 3 - iVar7 >> 2)) {
        iVar12 = FUN_00e4589c(param_1,&local_a8,&local_9c,&local_b8);
        if (iVar12 != 0) {
          FUN_00e46748(param_1,local_a8 & 0xffffffff,local_9c,local_b8);
        }
      }
      else {
        *(uint *)(param_1 + 0x580) = uVar6;
        *(undefined4 *)(param_1 + 0x4f8) = 0;
        FUN_00e49480(param_1);
        do {
          iVar12 = FUN_00e4c7e4(param_1);
        } while (iVar12 != -1);
      }
      uVar6 = *(uint *)(param_1 + 0x580);
      if (param_2 <= uVar6) goto LAB_00e492d4;
    }
    uVar14 = 0x25;
    goto LAB_00e48a9c;
  }
LAB_00e492cc:
  uVar14 = 0x25;
LAB_00e48a98:
  uVar8 = 0;
LAB_00e48a9c:
  *(undefined4 *)(param_1 + 0x9c) = uVar14;
LAB_00e48aa0:
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


