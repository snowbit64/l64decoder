// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 009c1984
// Size: 2740 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::reset() */

void ProceduralPlacementCacheManager::reset(void)

{
  bool bVar1;
  long in_x0;
  void *pvVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  
  pplVar5 = *(long ***)(undefined8 *)(in_x0 + 8);
  while (pplVar5 != (long **)(in_x0 + 0x10)) {
    plVar4 = pplVar5[7];
    if (plVar4 != (long *)0x0) {
      pvVar2 = (void *)plVar4[5];
      if (pvVar2 != (void *)0x0) {
        plVar4[6] = (long)pvVar2;
        operator_delete(pvVar2);
      }
      pvVar2 = (void *)plVar4[2];
      if (pvVar2 != (void *)0x0) {
        plVar4[3] = (long)pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(plVar4);
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
             *)(undefined8 *)(in_x0 + 8),*(__tree_node **)(in_x0 + 0x10));
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(long ***)(in_x0 + 8) = (long **)(in_x0 + 0x10);
  *(undefined8 *)(in_x0 + 0x18) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0x48);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x50)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSignedDistanceMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSignedDistanceMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSignedDistanceMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSignedDistanceMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSignedDistanceMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSignedDistanceMask*>>>
             *)(long *)(in_x0 + 0x48),*(__tree_node **)(in_x0 + 0x50));
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(long **)(in_x0 + 0x48) = (long *)(in_x0 + 0x50);
  *(undefined8 *)(in_x0 + 0x58) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0x60);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x68)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementThresholdMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementThresholdMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementThresholdMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementThresholdMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementThresholdMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementThresholdMask*>>>
             *)(long *)(in_x0 + 0x60),*(__tree_node **)(in_x0 + 0x68));
  *(undefined8 *)(in_x0 + 0x68) = 0;
  *(long **)(in_x0 + 0x60) = (long *)(in_x0 + 0x68);
  *(undefined8 *)(in_x0 + 0x70) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0x78);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x80)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>>>
             *)(long *)(in_x0 + 0x78),*(__tree_node **)(in_x0 + 0x80));
  *(undefined8 *)(in_x0 + 0x80) = 0;
  *(long **)(in_x0 + 0x78) = (long *)(in_x0 + 0x80);
  *(undefined8 *)(in_x0 + 0x88) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0x90);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x98)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
             *)(long *)(in_x0 + 0x90),*(__tree_node **)(in_x0 + 0x98));
  *(undefined8 *)(in_x0 + 0x98) = 0;
  *(long **)(in_x0 + 0x90) = (long *)(in_x0 + 0x98);
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0xa8);
  while (pplVar5 != (long **)(long *)(in_x0 + 0xb0)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexMask*>>>
             *)(long *)(in_x0 + 0xa8),*(__tree_node **)(in_x0 + 0xb0));
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  *(long **)(in_x0 + 0xa8) = (long *)(in_x0 + 0xb0);
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0xc0);
  while (pplVar5 != (long **)(long *)(in_x0 + 200)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
             *)(long *)(in_x0 + 0xc0),*(__tree_node **)(in_x0 + 200));
  *(undefined8 *)(in_x0 + 200) = 0;
  *(long **)(in_x0 + 0xc0) = (long *)(in_x0 + 200);
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0xd8);
  while (pplVar5 != (long **)(long *)(in_x0 + 0xe0)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementPerlinNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementPerlinNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementPerlinNoiseMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementPerlinNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementPerlinNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementPerlinNoiseMask*>>>
             *)(long *)(in_x0 + 0xd8),*(__tree_node **)(in_x0 + 0xe0));
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  *(long **)(in_x0 + 0xd8) = (long *)(in_x0 + 0xe0);
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  pplVar5 = *(long ***)(long *)(in_x0 + 0xf0);
  while (pplVar5 != (long **)(long *)(in_x0 + 0xf8)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexPerlinNoiseMask*>>>
             *)(long *)(in_x0 + 0xf0),*(__tree_node **)(in_x0 + 0xf8));
  *(undefined8 *)(in_x0 + 0xf8) = 0;
  *(undefined8 *)(in_x0 + 0x100) = 0;
  *(long **)(in_x0 + 0xf0) = (long *)(in_x0 + 0xf8);
  pplVar5 = *(long ***)(in_x0 + 0x108);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x110)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>>>
             *)(in_x0 + 0x108),*(__tree_node **)(in_x0 + 0x110));
  *(undefined8 *)(in_x0 + 0x110) = 0;
  *(undefined8 *)(in_x0 + 0x118) = 0;
  *(long **)(in_x0 + 0x108) = (long *)(in_x0 + 0x110);
  pplVar5 = *(long ***)(in_x0 + 0x120);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x128)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
             *)(in_x0 + 0x120),*(__tree_node **)(in_x0 + 0x128));
  *(undefined8 *)(in_x0 + 0x128) = 0;
  *(undefined8 *)(in_x0 + 0x130) = 0;
  *(long **)(in_x0 + 0x120) = (long *)(in_x0 + 0x128);
  pplVar5 = *(long ***)(in_x0 + 0x138);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x140)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRemapMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRemapMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRemapMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRemapMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRemapMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRemapMask*>>>
             *)(in_x0 + 0x138),*(__tree_node **)(in_x0 + 0x140));
  *(undefined8 *)(in_x0 + 0x140) = 0;
  *(undefined8 *)(in_x0 + 0x148) = 0;
  *(long **)(in_x0 + 0x138) = (long *)(in_x0 + 0x140);
  pplVar5 = *(long ***)(in_x0 + 0x150);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x158)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementClampedMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementClampedMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementClampedMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementClampedMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementClampedMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementClampedMask*>>>
             *)(in_x0 + 0x150),*(__tree_node **)(in_x0 + 0x158));
  *(undefined8 *)(in_x0 + 0x158) = 0;
  *(undefined8 *)(in_x0 + 0x160) = 0;
  *(long **)(in_x0 + 0x150) = (long *)(in_x0 + 0x158);
  pplVar5 = *(long ***)(in_x0 + 0x168);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x170)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementScaleMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementScaleMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementScaleMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementScaleMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementScaleMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementScaleMask*>>>
             *)(in_x0 + 0x168),*(__tree_node **)(in_x0 + 0x170));
  *(undefined8 *)(in_x0 + 0x170) = 0;
  *(undefined8 *)(in_x0 + 0x178) = 0;
  *(long **)(in_x0 + 0x168) = (long *)(in_x0 + 0x170);
  pplVar5 = *(long ***)(in_x0 + 0x180);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x188)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementConstMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementConstMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementConstMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementConstMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementConstMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementConstMask*>>>
             *)(in_x0 + 0x180),*(__tree_node **)(in_x0 + 0x188));
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(undefined8 *)(in_x0 + 400) = 0;
  *(long **)(in_x0 + 0x180) = (long *)(in_x0 + 0x188);
  if (*(long **)(in_x0 + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x198) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x198) = 0;
  if (*(long **)(in_x0 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x1a0) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x1a0) = 0;
  pplVar5 = *(long ***)(in_x0 + 0x1a8);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x1b0)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>>>
             *)(in_x0 + 0x1a8),*(__tree_node **)(in_x0 + 0x1b0));
  *(undefined8 *)(in_x0 + 0x1b0) = 0;
  *(undefined8 *)(in_x0 + 0x1b8) = 0;
  *(long **)(in_x0 + 0x1a8) = (long *)(in_x0 + 0x1b0);
  pplVar5 = *(long ***)(in_x0 + 0x1c0);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x1c8)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastObjectsMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastObjectsMask*>>>
             *)(in_x0 + 0x1c0),*(__tree_node **)(in_x0 + 0x1c8));
  *(undefined8 *)(in_x0 + 0x1c8) = 0;
  *(undefined8 *)(in_x0 + 0x1d0) = 0;
  *(long **)(in_x0 + 0x1c0) = (long *)(in_x0 + 0x1c8);
  pplVar5 = *(long ***)(in_x0 + 0x1d8);
  while (pplVar5 != (long **)(long *)(in_x0 + 0x1e0)) {
    if (pplVar5[7] != (long *)0x0) {
      (**(code **)(*pplVar5[7] + 8))();
    }
    pplVar3 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar3 = pplVar5 + 2;
      bVar1 = (long **)**pplVar3 != pplVar5;
      pplVar5 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar4 = *pplVar3;
          pplVar3 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar3;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>>>
             *)(in_x0 + 0x1d8),*(__tree_node **)(in_x0 + 0x1e0));
  *(undefined8 *)(in_x0 + 0x1e0) = 0;
  *(undefined8 *)(in_x0 + 0x1e8) = 0;
  *(long **)(in_x0 + 0x1d8) = (long *)(in_x0 + 0x1e0);
  return;
}


