// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<FileHashManager::FilenameHash,std::__ndk1::pair<FileHashManager::FilenameHash,FileHashManager::FileHash>>
// Entry Point: 00afc288
// Size: 384 bytes
// Signature: pair __thiscall __emplace_unique_key_args<FileHashManager::FilenameHash,std::__ndk1::pair<FileHashManager::FilenameHash,FileHashManager::FileHash>>(__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>> * this, FilenameHash * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<FileHashManager::FilenameHash,
   FileHashManager::FileHash>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<FileHashManager::FilenameHash,
   FileHashManager::FileHash>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,
   FileHashManager::FileHash>, std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,
   std::__ndk1::__value_type<FileHashManager::FilenameHash, FileHashManager::FileHash>,
   std::__ndk1::less<FileHashManager::FilenameHash>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,
   FileHashManager::FileHash> > >::__emplace_unique_key_args<FileHashManager::FilenameHash,
   std::__ndk1::pair<FileHashManager::FilenameHash, FileHashManager::FileHash>
   >(FileHashManager::FilenameHash const&, std::__ndk1::pair<FileHashManager::FilenameHash,
   FileHashManager::FileHash>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
::
__emplace_unique_key_args<FileHashManager::FilenameHash,std::__ndk1::pair<FileHashManager::FilenameHash,FileHashManager::FileHash>>
          (__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
           *this,FilenameHash *param_1,pair *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar6 = (undefined8 *)(this + 8);
  puVar7 = (undefined8 *)*puVar6;
  puVar2 = puVar6;
  if (puVar7 == (undefined8 *)0x0) {
LAB_00afc370:
    puVar7 = (undefined8 *)*puVar6;
  }
  else {
    puVar6 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar2 = puVar7;
        uVar5 = (*(ulong *)param_1 & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)param_1 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar5 = (puVar2[4] & 0xff00ff00ff00ff00) >> 8 | (puVar2[4] & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        if (uVar4 != uVar5) break;
        uVar5 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar5 = (puVar2[5] & 0xff00ff00ff00ff00) >> 8 | (puVar2[5] & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        if (uVar4 != uVar5) break;
LAB_00afc310:
        uVar5 = (puVar2[4] & 0xff00ff00ff00ff00) >> 8 | (puVar2[4] & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar5 = (*(ulong *)param_1 & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)param_1 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        if (uVar4 == uVar5) {
          uVar5 = (puVar2[5] & 0xff00ff00ff00ff00) >> 8 | (puVar2[5] & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar5 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          if (uVar4 == uVar5) goto LAB_00afc370;
        }
        iVar1 = 1;
        if (uVar4 < uVar5) {
          iVar1 = -1;
        }
        if (-1 < iVar1) goto LAB_00afc370;
        puVar6 = puVar2 + 1;
        puVar7 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_00afc370;
      }
      iVar1 = 1;
      if (uVar4 < uVar5) {
        iVar1 = -1;
      }
      if (-1 < iVar1) goto LAB_00afc310;
      puVar6 = puVar2;
      puVar7 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    puVar7 = (undefined8 *)*puVar2;
  }
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x58);
    uVar8 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = puVar2;
    uVar12 = *(undefined8 *)(param_2 + 10);
    uVar11 = *(undefined8 *)(param_2 + 8);
    puVar7[5] = uVar8;
    puVar7[4] = uVar3;
    puVar7[7] = uVar10;
    puVar7[6] = uVar9;
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    puVar7[9] = uVar12;
    puVar7[8] = uVar11;
    puVar7[10] = uVar3;
    *puVar6 = puVar7;
    puVar2 = puVar7;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar7;
}


