// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readUint32ListAttribute
// Entry Point: 009336f4
// Size: 392 bytes
// Signature: undefined __thiscall readUint32ListAttribute(I3DReader * this, char * param_1, vector * param_2)


/* I3DReader::readUint32ListAttribute(char const*, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

void __thiscall I3DReader::readUint32ListAttribute(I3DReader *this,char *param_1,vector *param_2)

{
  ulong uVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  void *__dest;
  byte *pbVar7;
  void *__src;
  ulong __n;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar5 = (byte *)ExpatUtil::getAttr(param_1,*(char ***)this);
  if (pbVar5 != (byte *)0x0) {
    bVar3 = *pbVar5;
    pbVar7 = pbVar5;
    while (bVar3 != 0) {
      local_6c = 0;
      lVar6 = StringUtil::strtouint((char *)pbVar7,&local_6c);
      puVar2 = *(uint **)(param_2 + 8);
      if (puVar2 == *(uint **)(param_2 + 0x10)) {
        __src = *(void **)param_2;
        __n = (long)puVar2 - (long)__src;
        uVar1 = ((long)__n >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n >> 1)) {
          uVar1 = (long)__n >> 1;
        }
        if (0x7ffffffffffffffb < __n) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar1 << 2);
        }
        puVar2 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
        *puVar2 = local_6c;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)param_2 = __dest;
        *(uint **)(param_2 + 8) = puVar2 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar1 * 4);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar2 = local_6c;
        *(uint **)(param_2 + 8) = puVar2 + 1;
      }
      pbVar7 = (byte *)(lVar6 + -1);
      do {
        pbVar7 = pbVar7 + 1;
        if (*pbVar7 == 0) break;
      } while (*pbVar7 - 0x3a < 0xfffffff6);
      bVar3 = *pbVar7;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar5 != (byte *)0x0);
}


