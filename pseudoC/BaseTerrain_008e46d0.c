// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseTerrain
// Entry Point: 008e46d0
// Size: 1176 bytes
// Signature: undefined __thiscall ~BaseTerrain(BaseTerrain * this)


/* BaseTerrain::~BaseTerrain() */

void __thiscall BaseTerrain::~BaseTerrain(BaseTerrain *this)

{
  DetailLayer *pDVar1;
  InfoLayer *pIVar2;
  void *pvVar3;
  ResourceManager *pRVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  BaseTerrainSyncer *pBVar8;
  DetailLayer *pDVar9;
  DetailLayer *this_00;
  DetailLayer *pDVar10;
  InfoLayer *pIVar11;
  InfoLayer *this_01;
  void *pvVar12;
  void *pvVar13;
  InfoLayer *pIVar14;
  ulong uVar15;
  
  pvVar3 = *(void **)(this + 0x80);
  *(undefined ***)this = &PTR__BaseTerrain_00fde698;
  if (pvVar3 != (void *)0x0) {
    plVar5 = *(long **)(this + 0x88);
    if (plVar5 == (long *)0x0) {
      operator_delete__(pvVar3);
    }
    else {
                    /* try { // try from 008e471c to 008e4723 has its CatchHandler @ 008e4b68 */
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    pBVar8 = *(BaseTerrainSyncer **)(this + 0x170);
    *(void **)(this + 0x80) = (void *)0x0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    if (pBVar8 != (BaseTerrainSyncer *)0x0) {
      BaseTerrainSyncer::~BaseTerrainSyncer(pBVar8);
      operator_delete(pBVar8);
    }
    *(undefined8 *)(this + 0x170) = 0;
  }
  lVar6 = *(long *)(this + 8);
  uVar7 = ((long)*(DetailLayer **)(this + 0x10) - lVar6 >> 4) * 0xba2e8ba3;
  if (0 < (int)uVar7) {
    uVar7 = uVar7 & 0xffffffff;
    pDVar10 = *(DetailLayer **)(this + 0x10);
    do {
      pDVar9 = (DetailLayer *)(lVar6 + (uVar7 - 1 & 0xffffffff) * 0xb0);
      this_00 = pDVar9;
      if (pDVar9 + 0xb0 == pDVar10) {
LAB_008e47d8:
        do {
          pDVar10 = pDVar10 + -0xb0;
          FUN_008eccf8(this + 0x18,pDVar10);
        } while (pDVar10 != pDVar9);
      }
      else {
        do {
          pDVar9 = this_00 + 0xb0;
          DetailLayer::operator=(this_00,pDVar9);
          pDVar1 = this_00 + 0x160;
          this_00 = pDVar9;
        } while (pDVar1 != pDVar10);
        pDVar10 = *(DetailLayer **)(this + 0x10);
        if (pDVar9 != pDVar10) goto LAB_008e47d8;
      }
      *(DetailLayer **)(this + 0x10) = pDVar9;
      if ((long)uVar7 < 2) break;
      lVar6 = *(long *)(this + 8);
      uVar7 = uVar7 - 1;
      pDVar10 = pDVar9;
    } while( true );
  }
  lVar6 = *(long *)(this + 0x50);
  pIVar11 = *(InfoLayer **)(this + 0x58);
  uVar7 = ((long)pIVar11 - lVar6 >> 3) * 0xba2e8ba3;
  if ((int)uVar7 < 1) {
LAB_008e48cc:
    if (*(long **)(this + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xd8) + 8))();
    }
    if (*(void **)(this + 0xe0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe0));
    }
    *(undefined8 *)(this + 0xe0) = 0;
                    /* try { // try from 008e48f0 to 008e497f has its CatchHandler @ 008e4b68 */
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0x100));
    *(undefined8 *)(this + 0x100) = 0;
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0x110));
    if (*(void **)(this + 0x120) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x120));
    }
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x128) = 0;
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0xf8));
    *(undefined8 *)(this + 0xf8) = 0;
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0xe8));
    if (*(void **)(this + 0xf0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xf0));
    }
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0x140));
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0x138));
    pRVar4 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar4,*(Resource **)(this + 0x130));
    if (*(long *)(this + 0x148) != 0) {
      pRVar4 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar4,*(Resource **)(this + 0x148));
    }
    if (*(long **)(this + 0x168) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x168) + 8))();
    }
    pBVar8 = *(BaseTerrainSyncer **)(this + 0x170);
    if (pBVar8 != (BaseTerrainSyncer *)0x0) {
      BaseTerrainSyncer::~BaseTerrainSyncer(pBVar8);
      operator_delete(pBVar8);
    }
    if (((byte)this[0xc0] & 1) != 0) {
      operator_delete(*(void **)(this + 0xd0));
    }
    pvVar3 = *(void **)(this + 0x68);
    if (pvVar3 != (void *)0x0) {
      pvVar13 = pvVar3;
      pvVar12 = *(void **)(this + 0x70);
      if (*(void **)(this + 0x70) != pvVar3) {
        do {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)((long)pvVar12 + -0x18),*(__tree_node **)((long)pvVar12 + -0x10));
          if ((*(byte *)((long)pvVar12 + -0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar12 + -0x28));
          }
          pvVar13 = (void *)((long)pvVar12 + -0x50);
          if ((*(byte *)((long)pvVar12 + -0x50) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar12 + -0x40));
          }
          pvVar12 = pvVar13;
        } while (pvVar13 != pvVar3);
        pvVar13 = *(void **)(this + 0x68);
      }
      *(void **)(this + 0x70) = pvVar3;
      operator_delete(pvVar13);
    }
    pvVar3 = *(void **)(this + 0x50);
    if (pvVar3 != (void *)0x0) {
      pvVar12 = *(void **)(this + 0x58);
      pvVar13 = pvVar3;
      if (pvVar12 != pvVar3) {
        do {
          pvVar12 = (void *)((long)pvVar12 + -0x58);
          FUN_008ece30(this + 0x60,pvVar12);
        } while (pvVar12 != pvVar3);
        pvVar13 = *(void **)(this + 0x50);
      }
      *(void **)(this + 0x58) = pvVar3;
      operator_delete(pvVar13);
    }
    pvVar3 = *(void **)(this + 0x38);
    if (pvVar3 != (void *)0x0) {
      pvVar13 = pvVar3;
      pvVar12 = *(void **)(this + 0x40);
      if (*(void **)(this + 0x40) != pvVar3) {
        do {
          pvVar13 = (void *)((long)pvVar12 + -0x40);
          if ((*(byte *)((long)pvVar12 + -0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar12 + -0x28));
          }
          pvVar12 = pvVar13;
        } while (pvVar13 != pvVar3);
        pvVar13 = *(void **)(this + 0x38);
      }
      *(void **)(this + 0x40) = pvVar3;
      operator_delete(pvVar13);
    }
    pvVar3 = *(void **)(this + 0x20);
    if (pvVar3 != (void *)0x0) {
      pvVar12 = *(void **)(this + 0x28);
      pvVar13 = pvVar3;
      if (pvVar12 != pvVar3) {
        do {
          pvVar12 = (void *)((long)pvVar12 + -0x98);
          FUN_008ecd9c(this + 0x30,pvVar12);
        } while (pvVar12 != pvVar3);
        pvVar13 = *(void **)(this + 0x20);
      }
      *(void **)(this + 0x28) = pvVar3;
      operator_delete(pvVar13);
    }
    pvVar3 = *(void **)(this + 8);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    pvVar12 = *(void **)(this + 0x10);
    pvVar13 = pvVar3;
    if (pvVar12 != pvVar3) {
      do {
        pvVar12 = (void *)((long)pvVar12 + -0xb0);
        FUN_008eccf8(this + 0x18,pvVar12);
      } while (pvVar12 != pvVar3);
      pvVar13 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar3;
    operator_delete(pvVar13);
    return;
  }
  uVar7 = uVar7 & 0xffffffff;
  do {
    uVar15 = uVar7 - 1 & 0xffffffff;
    plVar5 = *(long **)(lVar6 + uVar15 * 0x58 + 0x38);
    pIVar14 = pIVar11;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      lVar6 = *(long *)(this + 0x50);
      pIVar14 = *(InfoLayer **)(this + 0x58);
    }
    pIVar11 = (InfoLayer *)(lVar6 + uVar15 * 0x58);
    this_01 = pIVar11;
    if (pIVar11 + 0x58 == pIVar14) {
LAB_008e489c:
      do {
        pIVar14 = pIVar14 + -0x58;
        FUN_008ece30(this + 0x60,pIVar14);
      } while (pIVar14 != pIVar11);
    }
    else {
      do {
        pIVar11 = this_01 + 0x58;
        InfoLayer::operator=(this_01,pIVar11);
        pIVar2 = this_01 + 0xb0;
        this_01 = pIVar11;
      } while (pIVar2 != pIVar14);
      pIVar14 = *(InfoLayer **)(this + 0x58);
      if (pIVar11 != pIVar14) goto LAB_008e489c;
    }
    *(InfoLayer **)(this + 0x58) = pIVar11;
    if ((long)uVar7 < 2) goto LAB_008e48cc;
    lVar6 = *(long *)(this + 0x50);
    uVar7 = uVar7 - 1;
  } while( true );
}


