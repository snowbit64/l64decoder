// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overflow
// Entry Point: 0075eb90
// Size: 576 bytes
// Signature: undefined __thiscall overflow(basic_filebuf<char,std::__ndk1::char_traits<char>> * this, int param_1)


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::overflow(int) */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::overflow
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  size_t sVar6;
  undefined *puVar7;
  FILE *__s;
  ulong uVar8;
  void *__ptr;
  void *pvVar9;
  long lVar10;
  void *local_70;
  long local_68;
  undefined local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) != 0) {
    if (((byte)this[0x9c] >> 4 & 1) == 0) {
      uVar8 = *(ulong *)(this + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      if (uVar8 < 9) {
        lVar10 = 0;
        pvVar9 = (void *)0x0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x38) = 0;
      }
      else {
        if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
          pvVar9 = *(void **)(this + 0x68);
          uVar8 = *(ulong *)(this + 0x70);
        }
        else {
          pvVar9 = *(void **)(this + 0x40);
        }
        *(void **)(this + 0x28) = pvVar9;
        *(void **)(this + 0x30) = pvVar9;
        lVar10 = (long)pvVar9 + (uVar8 - 1);
        *(long *)(this + 0x38) = lVar10;
      }
      *(undefined4 *)(this + 0x9c) = 0x10;
    }
    else {
      pvVar9 = *(void **)(this + 0x28);
      lVar10 = *(long *)(this + 0x38);
    }
    puVar7 = *(undefined **)(this + 0x30);
    if (param_1 == -1) {
      sVar6 = (long)puVar7 - (long)pvVar9;
      __ptr = pvVar9;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = local_5c;
        *(undefined **)(this + 0x28) = puVar7;
        *(undefined **)(this + 0x30) = puVar7;
        *(ulong *)(this + 0x38) = (ulong)puVar7 | 1;
      }
      *puVar7 = (char)param_1;
      __ptr = *(void **)(this + 0x28);
      puVar7 = (undefined *)(*(long *)(this + 0x30) + 1);
      *(undefined **)(this + 0x30) = puVar7;
      sVar6 = (long)puVar7 - (long)__ptr;
    }
    if (sVar6 == 0) {
LAB_0075eca4:
      iVar3 = 0;
      if (param_1 != -1) {
        iVar3 = param_1;
      }
      goto LAB_0075ed88;
    }
    if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      local_68 = *(long *)(this + 0x40);
      plVar5 = *(long **)(this + 0x80);
      if (plVar5 == (long *)0x0) {
LAB_0075edc8:
                    /* WARNING: Subroutine does not return */
        FUN_0075edd0();
      }
      uVar2 = (**(code **)(*plVar5 + 0x18))
                        (plVar5,this + 0x88,__ptr,puVar7,&local_70,local_68,
                         local_68 + *(long *)(this + 0x60),&local_68);
      __ptr = *(void **)(this + 0x28);
      if (local_70 != __ptr) {
        do {
          if (uVar2 == 3) {
            __s = *(FILE **)(this + 0x78);
            sVar6 = *(long *)(this + 0x30) - (long)__ptr;
            goto LAB_0075ec88;
          }
          if ((1 < uVar2) ||
             (sVar4 = local_68 - (long)*(void **)(this + 0x40),
             sVar6 = fwrite(*(void **)(this + 0x40),1,sVar4,*(FILE **)(this + 0x78)), sVar6 != sVar4
             )) break;
          if (uVar2 != 1) goto LAB_0075ec9c;
          plVar5 = *(long **)(this + 0x80);
          *(void **)(this + 0x28) = local_70;
          *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
          if (plVar5 == (long *)0x0) goto LAB_0075edc8;
          uVar2 = (**(code **)(*plVar5 + 0x18))
                            (plVar5,this + 0x88,local_70,*(undefined8 *)(this + 0x30),&local_70,
                             *(long *)(this + 0x40),*(long *)(this + 0x40) + *(long *)(this + 0x60),
                             &local_68);
          __ptr = *(void **)(this + 0x28);
        } while (local_70 != __ptr);
      }
    }
    else {
      __s = *(FILE **)(this + 0x78);
LAB_0075ec88:
      sVar4 = fwrite(__ptr,1,sVar6,__s);
      if (sVar4 == sVar6) {
LAB_0075ec9c:
        *(void **)(this + 0x28) = pvVar9;
        *(void **)(this + 0x30) = pvVar9;
        *(long *)(this + 0x38) = lVar10;
        goto LAB_0075eca4;
      }
    }
  }
  iVar3 = -1;
LAB_0075ed88:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


