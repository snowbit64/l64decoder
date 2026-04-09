// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tessellateCurve
// Entry Point: 0073a630
// Size: 336 bytes
// Signature: undefined __cdecl tessellateCurve(vector * param_1, Vector2 * param_2, uint param_3, uint param_4, uchar param_5)


/* VehicleNavigationAgent::tessellateCurve(std::__ndk1::vector<std::__ndk1::pair<Vector2, unsigned
   char>, std::__ndk1::allocator<std::__ndk1::pair<Vector2, unsigned char> > >&, Vector2 const*,
   unsigned int, unsigned int, unsigned char) const */

void VehicleNavigationAgent::tessellateCurve
               (vector *param_1,Vector2 *param_2,uint param_3,uint param_4,uchar param_5)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 in_s1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  uchar local_5c [4];
  long local_58;
  
  puVar2 = (undefined8 *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_4 == 2) {
    std::__ndk1::
    vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
    ::emplace_back<Vector2_const&,unsigned_char&>
              ((vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
                *)param_2,(Vector2 *)puVar2,local_5c);
    std::__ndk1::
    vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
    ::emplace_back<Vector2_const&,unsigned_char&>
              ((vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
                *)param_2,(Vector2 *)(puVar2 + 1),local_5c);
  }
  else {
    local_68 = *puVar2;
    if (param_5 != '\0') {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        local_70 = pointOnQuadraticBezier
                             ((float)(ulong)uVar3 / (float)(ulong)param_5,(Vector2 *)puVar2);
        uStack_6c = in_s1;
        std::__ndk1::
        vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
        ::emplace_back<Vector2&,unsigned_char&>
                  ((vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
                    *)param_2,(Vector2 *)&local_68,local_5c);
        std::__ndk1::
        vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
        ::emplace_back<Vector2&,unsigned_char&>
                  ((vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
                    *)param_2,(Vector2 *)&local_70,local_5c);
        local_68 = CONCAT44(uStack_6c,local_70);
      } while (param_5 != uVar3);
      if ((param_4 == 5) && (param_5 != 0)) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          local_70 = pointOnQuadraticBezier
                               ((float)(ulong)uVar3 / (float)(ulong)param_5,(Vector2 *)(puVar2 + 2))
          ;
          uStack_6c = in_s1;
          std::__ndk1::
          vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
          ::emplace_back<Vector2&,unsigned_char&>
                    ((vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
                      *)param_2,(Vector2 *)&local_68,local_5c);
          std::__ndk1::
          vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
          ::emplace_back<Vector2&,unsigned_char&>
                    ((vector<std::__ndk1::pair<Vector2,unsigned_char>,std::__ndk1::allocator<std::__ndk1::pair<Vector2,unsigned_char>>>
                      *)param_2,(Vector2 *)&local_70,local_5c);
          local_68 = CONCAT44(uStack_6c,local_70);
        } while (param_5 != uVar3);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


