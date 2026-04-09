// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: leaveFrame
// Entry Point: 00afec4c
// Size: 912 bytes
// Signature: undefined leaveFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GpuProfilerManager::leaveFrame() */

void GpuProfilerManager::leaveFrame(void)

{
  int *piVar1;
  long lVar2;
  long in_x0;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  uint local_19c;
  int local_188 [2];
  undefined8 local_180 [32];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if (*(char *)(in_x0 + 0x1390) != '\0') {
    iVar7 = -2;
    if (*(uint *)(in_x0 + 0x13c0) < 2) {
      iVar7 = 1;
    }
    uVar5 = (ulong)(iVar7 + *(uint *)(in_x0 + 0x13c0));
    RenderDeviceManager::getInstance();
    plVar3 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    lVar10 = 0;
    local_19c = 0;
    do {
      lVar6 = in_x0 + lVar10 * 0x78;
      piVar1 = (int *)(lVar6 + 8);
      puVar11 = (uint *)(lVar6 + uVar5 * 4 + 0x68);
      if (*puVar11 != 0) {
        lVar14 = 0;
        uVar13 = 0;
        do {
          lVar9 = *(long *)(lVar6 + uVar5 * 0x18 + 0x20);
          if (*(char *)(in_x0 + 0x13cc) == '\0') {
            if ((*(long *)(lVar9 + lVar14) == 0) ||
               (uVar4 = (**(code **)(*plVar3 + 0xd0))(plVar3,*(long *)(lVar9 + lVar14),1,local_180),
               (uVar4 & 1) == 0)) goto LAB_00afedcc;
            iVar7 = (int)local_180[0];
          }
          else if (((*(long *)(lVar9 + lVar14) == 0) ||
                   (uVar4 = (**(code **)(*plVar3 + 0xd0))
                                      (plVar3,*(long *)(lVar9 + lVar14),1,local_180),
                   (uVar4 & 1) == 0)) ||
                  (uVar4 = (**(code **)(*plVar3 + 0xd0))
                                     (plVar3,*(undefined8 *)(lVar9 + lVar14 + 8),1,local_188),
                  (uVar4 & 1) == 0)) {
LAB_00afedcc:
            iVar7 = 0;
          }
          else {
            iVar7 = local_188[0] - (int)local_180[0];
          }
          *piVar1 = *piVar1 + iVar7;
          if (*(uint *)(lVar6 + 0x10) != 0x28) {
            lVar9 = in_x0 + (ulong)*(uint *)(lVar6 + 0x10) * 0x78;
            *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + iVar7;
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0x10;
        } while (uVar13 < *puVar11);
      }
      if (*(int *)(in_x0 + lVar10 * 0x78 + 0x14) == 0) {
        local_19c = *piVar1 + local_19c;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x28);
    puVar11 = (uint *)(in_x0 + 0x1360);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)puVar11,'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(char *)(in_x0 + 0x1378),'\0');
    std::__ndk1::__sort<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
              ((uint *)(in_x0 + 0x12c0),puVar11,(SortSectionsByOrder *)local_180);
    lVar10 = 0;
    do {
      uVar13 = (ulong)*(uint *)(in_x0 + lVar10 * 4 + 0x12c0);
      if (*(int *)(in_x0 + uVar13 * 0x78 + uVar5 * 4 + 0x68) != 0) {
        puVar12 = (uint *)(in_x0 + uVar13 * 0x78 + 0x14);
        if (*puVar12 != 0) {
          uVar8 = 0;
          do {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)puVar11);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *puVar12);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)puVar11);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)puVar11);
        if (*puVar12 == 0) {
          if (local_19c == 0) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + uVar13 * 0x78 + 8));
            fVar15 = fVar15 / (float)(ulong)local_19c;
          }
        }
        else {
          fVar15 = 0.0;
          uVar8 = *(uint *)(in_x0 + uVar13 * 0x78 + 0x10);
          if ((uVar8 != 0x28) && (uVar8 = *(uint *)(in_x0 + (ulong)uVar8 * 0x78 + 8), uVar8 != 0)) {
            fVar15 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + uVar13 * 0x78 + 8));
            fVar15 = fVar15 / (float)(ulong)uVar8;
          }
        }
        FUN_00afefdc((double)(fVar15 * 100.0),local_180);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)(in_x0 + 0x1378));
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x28);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


