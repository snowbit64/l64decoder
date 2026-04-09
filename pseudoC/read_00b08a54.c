// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b08a54
// Size: 608 bytes
// Signature: undefined __thiscall read(AudioLoaderOGG * this, uint param_1, char * param_2, bool * param_3)


/* AudioLoaderOGG::read(unsigned int, char*, bool&) */

int __thiscall AudioLoaderOGG::read(AudioLoaderOGG *this,uint param_1,char *param_2,bool *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  long local_78;
  int local_70;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *(int *)(this + 0x3c) * 4;
  if (param_1 < uVar1) {
    uVar9 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_1 / uVar1;
    }
    uVar9 = 0;
LAB_00b08ac8:
    do {
      uVar6 = *(uint *)(this + 0x34);
      if (*(uint *)(this + 0x38) == uVar6) {
        uVar6 = *(uint *)(this + 0x5c);
        local_6c = 0;
        local_70 = 0;
        local_78 = 0;
        if (uVar6 < *(uint *)(this + 0x60)) {
          iVar5 = stb_vorbis_decode_frame_pushdata
                            (*(undefined8 *)(this + 0x68),*(long *)(this + 0x40) + (ulong)uVar6,
                             *(uint *)(this + 0x60) - uVar6,&local_70,&local_78,&local_6c);
          bVar7 = true;
          if ((-1 < iVar5) && (-1 < (int)local_6c)) {
            if (local_6c == 0) {
              *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + iVar5;
              if (iVar5 == 0) goto LAB_00b08b80;
              uVar6 = 0;
            }
            else {
              if (local_70 != *(int *)(this + 0x3c)) goto LAB_00b08c68;
              *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + iVar5;
              if (iVar5 == 0) goto LAB_00b08b80;
              uVar6 = local_6c;
              if (local_70 != 0) {
                uVar8 = 0;
                do {
                  memcpy((void *)(*(long *)(this + 0x18) +
                                 (ulong)(uint)(*(int *)(this + 0x30) * (int)uVar8) * 4),
                         *(void **)(local_78 + uVar8 * 8),
                         -(ulong)(local_6c >> 0x1f) & 0xfffffffc00000000 | (ulong)local_6c << 2);
                  uVar8 = uVar8 + 1;
                  uVar6 = local_6c;
                } while (uVar8 < *(uint *)(this + 0x3c));
              }
            }
            *(undefined4 *)(this + 0x34) = 0;
            *(uint *)(this + 0x38) = uVar6;
            goto LAB_00b08ac8;
          }
        }
        else {
LAB_00b08b80:
          uVar8 = (**(code **)(**(long **)(this + 0x10) + 0x50))();
          if ((uVar8 & 1) == 0) {
            uVar6 = *(uint *)(this + 0x5c);
            if (uVar6 != 0) {
              uVar2 = *(int *)(this + 0x60) - uVar6;
              *(uint *)(this + 0x60) = uVar2;
              if (uVar2 != 0) {
                memmove(*(void **)(this + 0x40),
                        (void *)((long)*(void **)(this + 0x40) + (ulong)uVar6),(ulong)uVar2);
              }
              *(undefined4 *)(this + 0x5c) = 0;
            }
            iVar5 = (**(code **)(**(long **)(this + 0x10) + 0x28))
                              (*(long **)(this + 0x10),
                               *(long *)(this + 0x40) + (ulong)*(uint *)(this + 0x60),
                               *(int *)(this + 0x58) - *(uint *)(this + 0x60));
            if (iVar5 != 0) {
              *(int *)(this + 0x60) = *(int *)(this + 0x60) + iVar5;
              goto LAB_00b08ac8;
            }
            bVar7 = false;
          }
          else {
LAB_00b08c68:
            bVar7 = true;
          }
        }
        *param_3 = bVar7;
        break;
      }
      uVar2 = *(uint *)(this + 0x38) - uVar6;
      if (uVar3 - uVar9 <= uVar2) {
        uVar2 = uVar3 - uVar9;
      }
      if (*(int *)(this + 0x3c) != 0) {
        uVar8 = 0;
        do {
          memcpy(param_2 + (ulong)(uVar3 * (int)uVar8) * 4 + (ulong)uVar9 * 4,
                 (void *)(*(long *)(this + 0x18) +
                          (ulong)(uint)(*(int *)(this + 0x30) * (int)uVar8) * 4 + (ulong)uVar6 * 4),
                 (ulong)uVar2 << 2);
          uVar8 = uVar8 + 1;
          uVar6 = *(uint *)(this + 0x34);
        } while (uVar8 < *(uint *)(this + 0x3c));
      }
      uVar9 = uVar2 + uVar9;
      *(uint *)(this + 0x34) = uVar6 + uVar2;
    } while (uVar9 < uVar3);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9 * uVar1;
}


