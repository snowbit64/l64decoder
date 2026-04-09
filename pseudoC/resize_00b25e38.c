// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00b25e38
// Size: 412 bytes
// Signature: undefined __cdecl resize(uint param_1, CacheEntry param_2, bool param_3)


/* SmallVector<DomXMLFile::CacheEntry, 8u>::resize(unsigned int, DomXMLFile::CacheEntry, bool) */

void SmallVector<DomXMLFile::CacheEntry,8u>::resize
               (uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = (ulong)param_2;
  uVar1 = *param_1;
  local_48 = param_3;
  uStack_40 = param_4;
  if (uVar1 < 9) {
    if (param_2 < 9) {
      if (uVar1 < param_2) {
        lVar3 = uVar6 - uVar1;
        puVar4 = (undefined8 *)(param_1 + (ulong)uVar1 * 4 + 1);
        do {
          lVar3 = lVar3 + -1;
          puVar4[1] = param_4;
          *puVar4 = param_3;
          puVar4 = puVar4 + 2;
        } while (lVar3 != 0);
      }
      goto LAB_00b25fa8;
    }
    switchToHeapStorage((SmallVector<DomXMLFile::CacheEntry,8u> *)param_1,param_2);
  }
  else if (param_2 < 9) {
    if (param_2 != 0) {
      uVar7 = **(undefined8 **)(param_1 + 0x22);
      *(undefined8 *)(param_1 + 3) = (*(undefined8 **)(param_1 + 0x22))[1];
      *(undefined8 *)(param_1 + 1) = uVar7;
      if (param_2 != 1) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x10);
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x18);
        *(undefined8 *)(param_1 + 5) = uVar7;
        if (param_2 != 2) {
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x20);
          *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x28);
          *(undefined8 *)(param_1 + 9) = uVar7;
          if (param_2 != 3) {
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x30);
            *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x38);
            *(undefined8 *)(param_1 + 0xd) = uVar7;
            if (param_2 != 4) {
              uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x40);
              *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x48);
              *(undefined8 *)(param_1 + 0x11) = uVar7;
              if (param_2 != 5) {
                uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x50);
                *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x58);
                *(undefined8 *)(param_1 + 0x15) = uVar7;
                if (param_2 != 6) {
                  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x60);
                  *(undefined8 *)(param_1 + 0x1b) =
                       *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x68);
                  *(undefined8 *)(param_1 + 0x19) = uVar7;
                  if (param_2 != 7) {
                    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x70);
                    *(undefined8 *)(param_1 + 0x1f) =
                         *(undefined8 *)(*(long *)(param_1 + 0x22) + 0x78);
                    *(undefined8 *)(param_1 + 0x1d) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x22);
    if ((param_5 & 1) == 0) {
      std::__ndk1::vector<DomXMLFile::CacheEntry,std::__ndk1::allocator<DomXMLFile::CacheEntry>>::
      shrink_to_fit();
    }
    goto LAB_00b25fa8;
  }
  lVar3 = *(long *)(param_1 + 0x22);
  uVar5 = *(long *)(param_1 + 0x24) - lVar3 >> 4;
  if (uVar5 < uVar6) {
    std::__ndk1::vector<DomXMLFile::CacheEntry,std::__ndk1::allocator<DomXMLFile::CacheEntry>>::
    __append((vector<DomXMLFile::CacheEntry,std::__ndk1::allocator<DomXMLFile::CacheEntry>> *)
             (param_1 + 0x22),uVar6 - uVar5,(CacheEntry *)&local_48);
  }
  else if (uVar6 < uVar5) {
    *(ulong *)(param_1 + 0x24) = lVar3 + uVar6 * 0x10;
  }
LAB_00b25fa8:
  *param_1 = param_2;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


