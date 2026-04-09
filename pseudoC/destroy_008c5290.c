// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 008c5290
// Size: 448 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* InstancedGeometryManager::destroy() */

void InstancedGeometryManager::destroy(void)

{
  bool bVar1;
  __tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
  **in_x0;
  long *plVar2;
  __tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
  **pp_Var3;
  __tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
  *p_Var4;
  void **ppvVar5;
  __tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
  **pp_Var6;
  
  pp_Var6 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
             **)*in_x0;
  while (pp_Var6 != in_x0 + 1) {
    ppvVar5 = (void **)pp_Var6[4];
    if (*ppvVar5 != (void *)0x0) {
      operator_delete__(*ppvVar5);
    }
    if (ppvVar5[3] != (void *)0x0) {
      operator_delete__(ppvVar5[3]);
    }
    if ((long *)ppvVar5[7] != (long *)0x0) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*ppvVar5[7] + 8))();
    }
    if ((long *)ppvVar5[9] != (long *)0x0) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*ppvVar5[9] + 8))();
    }
    operator_delete(ppvVar5);
    pp_Var3 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
               **)pp_Var6[1];
    if ((__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
         **)pp_Var6[1] ==
        (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
         **)0x0) {
      pp_Var3 = pp_Var6 + 2;
      bVar1 = *(__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                ***)*pp_Var3 != pp_Var6;
      pp_Var6 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                 **)*pp_Var3;
      if (bVar1) {
        do {
          p_Var4 = *pp_Var3;
          pp_Var3 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                     **)(p_Var4 + 0x10);
          pp_Var6 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                     **)*pp_Var3;
        } while (*pp_Var6 != p_Var4);
      }
    }
    else {
      do {
        pp_Var6 = pp_Var3;
        pp_Var3 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                   **)*pp_Var6;
      } while ((__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                **)*pp_Var6 !=
               (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                **)0x0);
    }
  }
  std::__ndk1::
  __tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
  ::destroy((__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
             *)in_x0,(__tree_node *)in_x0[1]);
  in_x0[1] = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
              *)0x0;
  in_x0[2] = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
              *)0x0;
  *in_x0 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
            *)(in_x0 + 1);
  pp_Var6 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
             **)in_x0[4];
  do {
    if (pp_Var6 == in_x0 + 5) {
      std::__ndk1::
      __tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>>
      ::destroy((__tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>>
                 *)(in_x0 + 4),(__tree_node *)in_x0[5]);
      in_x0[5] = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                  *)0x0;
      in_x0[6] = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                  *)0x0;
      in_x0[4] = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                  *)(in_x0 + 5);
      VertexBufferPool::cleanUnusedVertexBuffers((VertexBufferPool *)in_x0[7],0);
      return;
    }
    p_Var4 = pp_Var6[4];
    if (p_Var4[0x10] ==
        (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
         )0x0) {
      if (*(int *)(p_Var4 + 0x14) != 4) {
        plVar2 = *(long **)(p_Var4 + 0x18);
        goto joined_r0x008c53f0;
      }
      VertexBufferPool::releaseVertexBuffer
                ((VertexBufferPool *)in_x0[7],*(IVertexBuffer **)(p_Var4 + 0x18));
    }
    else {
      plVar2 = *(long **)(p_Var4 + 0x28);
joined_r0x008c53f0:
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    operator_delete(p_Var4);
    pp_Var3 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
               **)pp_Var6[1];
    if ((__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
         **)pp_Var6[1] ==
        (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
         **)0x0) {
      pp_Var3 = pp_Var6 + 2;
      bVar1 = *(__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                ***)*pp_Var3 != pp_Var6;
      pp_Var6 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                 **)*pp_Var3;
      if (bVar1) {
        do {
          p_Var4 = *pp_Var3;
          pp_Var3 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                     **)(p_Var4 + 0x10);
          pp_Var6 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                     **)*pp_Var3;
        } while (*pp_Var6 != p_Var4);
      }
    }
    else {
      do {
        pp_Var6 = pp_Var3;
        pp_Var3 = (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                   **)*pp_Var6;
      } while ((__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                **)*pp_Var6 !=
               (__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
                **)0x0);
    }
  } while( true );
}


