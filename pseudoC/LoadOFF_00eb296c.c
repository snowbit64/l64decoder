// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadOFF
// Entry Point: 00eb296c
// Size: 1564 bytes
// Signature: undefined __thiscall LoadOFF(Mesh * this, basic_string * param_1, bool param_2)


/* VHACD::Mesh::LoadOFF(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

ulong __thiscall VHACD::Mesh::LoadOFF(Mesh *this,basic_string *param_1,bool param_2)

{
  size_t sVar1;
  char cVar2;
  char cVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  char *pcVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  FILE *__stream;
  size_t sVar11;
  ulong *puVar12;
  char *__s2;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  Mesh *pMVar18;
  ulong uVar19;
  Mesh *pMVar20;
  ulong uVar21;
  int local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  undefined8 local_4a8;
  undefined8 local_4a0;
  size_t local_498;
  char *local_490;
  byte local_488;
  undefined4 local_487;
  size_t local_480;
  char *local_478;
  char acStack_470 [1024];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  pcVar14 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar14 = (char *)((long)param_1 + 1);
  }
  __stream = fopen(pcVar14,"r");
  if (__stream == (FILE *)0x0) goto LAB_00eb2b3c;
  local_488 = 6;
  local_487 = 0x46464f;
  fscanf(__stream,"%s",acStack_470);
  sVar11 = strlen(acStack_470);
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    pcVar14 = (char *)((ulong)&local_4a0 | 1);
    local_4a0 = CONCAT71(local_4a0._1_7_,(char)((int)sVar11 << 1));
    if (sVar11 != 0) goto LAB_00eb2a40;
  }
  else {
    uVar16 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pcVar14 = (char *)operator_new(uVar16);
    local_4a0 = uVar16 | 1;
    local_498 = sVar11;
    local_490 = pcVar14;
LAB_00eb2a40:
    memcpy(pcVar14,acStack_470,sVar11);
  }
  bVar8 = local_488;
  pcVar7 = local_490;
  pcVar14[sVar11] = '\0';
  uVar16 = local_4a0 >> 1 & 0x7f;
  sVar11 = uVar16;
  if ((local_4a0 & 1) != 0) {
    sVar11 = local_498;
  }
  sVar1 = (ulong)(local_488 >> 1);
  if ((local_488 & 1) != 0) {
    sVar1 = local_480;
  }
  if (sVar11 == sVar1) {
    pcVar15 = (char *)((ulong)&local_4a0 | 1);
    pcVar14 = pcVar15;
    if ((local_4a0 & 1) != 0) {
      pcVar14 = local_490;
    }
    __s2 = (char *)((ulong)&local_488 | 1);
    if ((local_488 & 1) != 0) {
      __s2 = local_478;
    }
    if ((local_4a0 & 1) == 0) {
      if (sVar11 != 0) {
        do {
          uVar16 = uVar16 - 1;
          cVar2 = *pcVar15;
          cVar3 = *__s2;
          __s2 = __s2 + 1;
          pcVar15 = pcVar15 + 1;
        } while (cVar2 == cVar3 && uVar16 != 0);
        if ((local_4a0 & 1) != 0) {
          operator_delete(local_490);
        }
        if (cVar2 != cVar3) goto LAB_00eb2b24;
      }
    }
    else if (sVar11 == 0) {
      operator_delete(local_490);
    }
    else {
      iVar10 = memcmp(pcVar14,__s2,sVar11);
      operator_delete(pcVar7);
      if (iVar10 != 0) goto LAB_00eb2b24;
    }
    local_4a0 = local_4a0 & 0xffffffff00000000;
    local_4a8 = 0;
    fscanf(__stream,"%i",&local_4a0);
    fscanf(__stream,"%i",(long)&local_4a8 + 4);
    fscanf(__stream,"%i",&local_4a8);
    uVar19 = (ulong)(int)local_4a0;
    uVar16 = *(ulong *)(this + 0x610);
    if (uVar16 < uVar19) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar19;
      uVar21 = uVar19 * 0x18 + 8;
      if (SUB168(auVar4 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar19 * 0x18) {
        uVar21 = 0xffffffffffffffff;
      }
      puVar12 = (ulong *)operator_new__(uVar21);
      lVar17 = *(long *)(this + 0x608);
      pMVar20 = *(Mesh **)(this + 0x600);
      pMVar18 = this;
      if (uVar16 != 0x40) {
        pMVar18 = pMVar20;
      }
      *puVar12 = uVar19;
      memcpy(puVar12 + 1,pMVar18,lVar17 * 0x18);
      if (pMVar20 != (Mesh *)0x0) {
        operator_delete__(pMVar20 + -8);
      }
      *(ulong **)(this + 0x600) = puVar12 + 1;
      *(ulong *)(this + 0x610) = uVar19;
      uVar16 = (ulong)local_4a8._4_4_;
      uVar21 = *(ulong *)(this + 0x928);
      *(ulong *)(this + 0x608) = uVar19;
      if (uVar21 < uVar16) goto LAB_00eb2c78;
LAB_00eb2be0:
      *(ulong *)(this + 0x920) = uVar16;
    }
    else {
      uVar16 = (ulong)local_4a8._4_4_;
      uVar21 = *(ulong *)(this + 0x928);
      *(ulong *)(this + 0x608) = uVar19;
      if (uVar16 <= uVar21) goto LAB_00eb2be0;
LAB_00eb2c78:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar16;
      uVar19 = uVar16 * 0xc + 8;
      if (SUB168(auVar5 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar16 * 0xc) {
        uVar19 = 0xffffffffffffffff;
      }
      puVar12 = (ulong *)operator_new__(uVar19);
      lVar17 = *(long *)(this + 0x920);
      pMVar20 = *(Mesh **)(this + 0x918);
      pMVar18 = this + 0x618;
      if (uVar21 != 0x40) {
        pMVar18 = pMVar20;
      }
      *puVar12 = uVar16;
      memcpy(puVar12 + 1,pMVar18,lVar17 * 0xc);
      if (pMVar20 != (Mesh *)0x0) {
        operator_delete__(pMVar20 + -8);
      }
      *(ulong **)(this + 0x918) = puVar12 + 1;
      *(ulong *)(this + 0x928) = uVar16;
      *(ulong *)(this + 0x920) = uVar16;
    }
    if (0 < (int)local_4a0) {
      lVar17 = 0;
      lVar13 = 0;
      do {
        fscanf(__stream,"%f",&local_4ac);
        fscanf(__stream,"%f",&local_4b0);
        fscanf(__stream,"%f",&local_4b4);
        lVar17 = lVar17 + 1;
        bVar9 = *(long *)(this + 0x610) != 0x40;
        pMVar18 = this;
        if (bVar9) {
          pMVar18 = *(Mesh **)(this + 0x600);
        }
        *(double *)(pMVar18 + lVar13) = (double)local_4ac;
        pMVar18 = this;
        if (bVar9) {
          pMVar18 = *(Mesh **)(this + 0x600);
        }
        *(double *)(pMVar18 + lVar13 + 8) = (double)local_4b0;
        pMVar18 = this;
        if (bVar9) {
          pMVar18 = *(Mesh **)(this + 0x600);
        }
        *(double *)(pMVar18 + lVar13 + 0x10) = (double)local_4b4;
        lVar13 = lVar13 + 0x18;
      } while (lVar17 < (int)local_4a0);
    }
    pMVar18 = this + 0x618;
    if (0 < local_4a8._4_4_) {
      lVar17 = 0;
      if (param_2) {
        do {
          fscanf(__stream,"%i",&local_4c4);
          if (local_4c4 == 3) {
            fscanf(__stream,"%i",&local_4b8);
            fscanf(__stream,"%i",&local_4bc);
            fscanf(__stream,"%i",&local_4c0);
            bVar9 = *(long *)(this + 0x928) != 0x40;
            lVar13 = lVar17 * 0xc;
            pMVar20 = pMVar18;
            if (bVar9) {
              pMVar20 = *(Mesh **)(this + 0x918);
            }
            *(undefined4 *)(pMVar20 + lVar13) = local_4b8;
            pMVar20 = pMVar18;
            if (bVar9) {
              pMVar20 = *(Mesh **)(this + 0x918);
            }
            *(undefined4 *)(pMVar20 + lVar13 + 4) = local_4c0;
            pMVar20 = pMVar18;
            if (bVar9) {
              pMVar20 = *(Mesh **)(this + 0x918);
            }
            *(undefined4 *)(pMVar20 + lVar13 + 8) = local_4bc;
          }
          else if (0 < local_4c4) {
            iVar10 = 0;
            do {
              fscanf(__stream,"%i",&local_4c4);
              iVar10 = iVar10 + 1;
            } while (iVar10 < local_4c4);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < local_4a8._4_4_);
      }
      else {
        do {
          fscanf(__stream,"%i",&local_4c4);
          if (local_4c4 == 3) {
            fscanf(__stream,"%i",&local_4b8);
            fscanf(__stream,"%i",&local_4bc);
            fscanf(__stream,"%i",&local_4c0);
            bVar9 = *(long *)(this + 0x928) != 0x40;
            lVar13 = lVar17 * 0xc;
            pMVar20 = pMVar18;
            if (bVar9) {
              pMVar20 = *(Mesh **)(this + 0x918);
            }
            *(undefined4 *)(pMVar20 + lVar13) = local_4b8;
            pMVar20 = pMVar18;
            if (bVar9) {
              pMVar20 = *(Mesh **)(this + 0x918);
            }
            *(undefined4 *)(pMVar20 + lVar13 + 4) = local_4bc;
            pMVar20 = pMVar18;
            if (bVar9) {
              pMVar20 = *(Mesh **)(this + 0x918);
            }
            *(undefined4 *)(pMVar20 + lVar13 + 8) = local_4c0;
          }
          else if (0 < local_4c4) {
            iVar10 = 0;
            do {
              fscanf(__stream,"%i",&local_4c4);
              iVar10 = iVar10 + 1;
            } while (iVar10 < local_4c4);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < local_4a8._4_4_);
      }
    }
    fclose(__stream);
    __stream = (FILE *)0x1;
  }
  else if ((local_4a0 & 1) == 0) {
LAB_00eb2b24:
    fclose(__stream);
    __stream = (FILE *)0x0;
  }
  else {
    operator_delete(local_490);
    fclose(__stream);
    __stream = (FILE *)0x0;
  }
  if ((bVar8 & 1) != 0) {
    operator_delete(local_478);
  }
LAB_00eb2b3c:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return (ulong)__stream & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


