// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0099639c
// Size: 3232 bytes
// Signature: undefined __thiscall update(Bt2PhysicsStats * this, Bt2World * param_1)


/* WARNING: Type propagation algorithm not settling */
/* Bt2PhysicsStats::update(Bt2World*) */

void __thiscall Bt2PhysicsStats::update(Bt2PhysicsStats *this,Bt2World *param_1)

{
  undefined4 *puVar1;
  Bt2PhysicsStats BVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  long lVar10;
  size_t sVar11;
  Bt2PhysicsContextManager *this_00;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  uint uVar18;
  CProfileIterator *pCVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 ******ppppppuVar23;
  float fVar24;
  undefined8 ******local_920;
  undefined8 ******local_918;
  undefined8 *******local_910;
  undefined8 *******local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined **local_8e0;
  undefined **local_8d8 [8];
  ulong local_898;
  undefined8 uStack_890;
  void *local_888;
  undefined8 uStack_880;
  undefined4 local_878;
  undefined **local_870 [17];
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined8 *****local_7d8;
  undefined **local_7d0 [8];
  ulong local_790;
  undefined8 uStack_788;
  void *local_780;
  undefined8 uStack_778;
  undefined4 local_770;
  undefined **local_768 [17];
  undefined8 local_6e0;
  undefined4 local_6d8;
  undefined **local_6d0;
  undefined **local_6c8 [8];
  ulong local_688;
  undefined8 uStack_680;
  void *local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  undefined **local_660 [17];
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined auStack_5c8 [4];
  int local_5c4;
  undefined4 local_5c0;
  void *local_5b8;
  char local_5b0;
  undefined **local_5a8;
  undefined **local_5a0 [8];
  ulong local_560;
  undefined8 uStack_558;
  void *local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined **local_538 [17];
  undefined8 local_4b0;
  undefined4 local_4a8;
  char acStack_4a0 [32];
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (this[10] != (Bt2PhysicsStats)0x0) {
    BVar2 = this[9];
    this[9] = (Bt2PhysicsStats)0x0;
    local_8f0 = 0;
    local_8e8 = 0;
    local_8f8 = 0;
    Bt2World::getStats(param_1,(uint *)((long)&local_8e8 + 4),(uint *)&local_8e8,
                       (uint *)((long)&local_8f0 + 4),(uint *)&local_8f0,
                       (uint *)((long)&local_8f8 + 4),(uint *)&local_8f8);
    local_5a8 = (undefined **)0xfd8f40;
    local_538[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00996434 to 0099643f has its CatchHandler @ 00997104 */
    std::__ndk1::ios_base::init(local_538);
    local_4b0 = 0;
    local_4a8 = 0xffffffff;
    local_5a8 = &PTR__basic_ostringstream_00fd8ed0;
    local_538[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00996464 to 0099646f has its CatchHandler @ 009970e8 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_540 = 0x10;
    uStack_558 = 0;
    local_560 = 0;
    local_5a0[0] = &PTR__basic_stringbuf_00fd8fa0;
    uStack_548 = 0;
    local_550 = (void *)0x0;
                    /* try { // try from 00996498 to 0099657b has its CatchHandler @ 00997158 */
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"Dynamic ",8);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,local_8e8._4_4_
                       );
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8," Active ",8);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,(uint)local_8e8
                       );
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"Kinematic ",10);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,local_8f0._4_4_
                       );
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"Static ",7);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,(uint)local_8f0
                       );
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"Joints ",7);
    iVar5 = (**(code **)(*(long *)param_1 + 0xd0))(param_1);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
    lVar20 = 0;
    uVar18 = 0;
    local_5b0 = '\x01';
    lVar21 = 0x10;
    local_5b8 = (void *)0x0;
    local_5c0 = 0;
    local_5c4 = 0;
    while( true ) {
                    /* try { // try from 009965b4 to 009965c3 has its CatchHandler @ 00997174 */
      plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
      iVar5 = (**(code **)(*plVar9 + 0x48))();
      if (iVar5 <= lVar20) break;
                    /* try { // try from 009965d8 to 00996603 has its CatchHandler @ 0099717c */
      plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
      lVar10 = (**(code **)(*plVar9 + 0x38))();
      plVar9 = *(long **)(*(long *)(lVar10 + 0x10) + lVar21);
      if ((plVar9 != (long *)0x0) &&
         ((**(code **)(*plVar9 + 0x20))(plVar9,auStack_5c8), 0 < local_5c4)) {
        uVar18 = uVar18 + 1;
        local_5c4 = 0;
      }
      lVar20 = lVar20 + 1;
      lVar21 = lVar21 + 0x20;
    }
                    /* try { // try from 0099661c to 009966b3 has its CatchHandler @ 00997150 */
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"Pairs ",6);
    plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
    iVar5 = (**(code **)(*plVar9 + 0x48))();
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar5);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8," Near ",6);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar18);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8," Islands ",9);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,local_8f8._4_4_
                       );
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8," Active ",8);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,(uint)local_8f8
                       );
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
    local_6d0 = (undefined **)0xfd8f40;
    local_660[0] = (undefined **)0xfd8f68;
                    /* try { // try from 009966d0 to 009966df has its CatchHandler @ 009970d8 */
    std::__ndk1::ios_base::init(local_660);
    local_5d8 = 0;
    local_5d0 = 0xffffffff;
    local_6d0 = &PTR__basic_ostringstream_00fd8ed0;
    local_660[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00996708 to 00996713 has its CatchHandler @ 009970bc */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_908 = (undefined8 *******)0x0;
    uStack_900 = 0;
    local_668 = 0x10;
    uStack_680 = 0;
    local_688 = 0;
    uStack_670 = 0;
    local_678 = (void *)0x0;
    local_6c8[0] = &PTR__basic_stringbuf_00fd8fa0;
    iVar5 = *(int *)(param_1 + 0xc);
    local_910 = &local_908;
    if (0 < iVar5) {
      lVar20 = 0;
      uVar22 = (ulong)&local_480 | 1;
      do {
        ppppppuVar23 = *(undefined8 *******)(*(long *)(param_1 + 0x18) + lVar20 * 8);
        pppppppuVar15 = local_908;
        pppppppuVar13 = &local_908;
        if (local_908 == (undefined8 *******)0x0) {
LAB_009967b8:
          if (*(int *)(ppppppuVar23 + 0x20) == 4) {
                    /* try { // try from 009967e4 to 009967f7 has its CatchHandler @ 00997130 */
            FUN_009974d4(&local_480,0x100,"GHOST(%u)",*(undefined4 *)((long)ppppppuVar23 + 0x154));
LAB_00996810:
            lVar21 = __strlen_chk(&local_480,0x100);
            FUN_009974d4((long)&local_480 + lVar21,0xffffffffffffffff,&DAT_004e5b5a,ppppppuVar23);
            local_7d8 = *(undefined8 ******)(*(long *)(param_1 + 0x18) + lVar20 * 8);
                    /* try { // try from 0099683c to 00996847 has its CatchHandler @ 00997148 */
            local_7d0[0] = (undefined **)&local_480;
            std::__ndk1::
            __tree<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<btCollisionObject_const*,std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<btCollisionObject_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::__emplace_unique_impl<std::__ndk1::pair<btCollisionObject*,char*>>((pair *)&local_910)
            ;
          }
          else {
            if (*(int *)(ppppppuVar23 + 0x20) != 2) {
                    /* try { // try from 009967fc to 0099682f has its CatchHandler @ 00997160 */
              FUN_009974d4(&local_480,0x100,"CO[%u]");
              goto LAB_00996810;
            }
            if ((*(byte *)(ppppppuVar23 + 0x1c) & 3) == 0) {
              bVar4 = *(int *)((long)ppppppuVar23 + 0xec) != 2 &&
                      *(int *)((long)ppppppuVar23 + 0xec) != 5;
            }
            else {
              bVar4 = false;
            }
                    /* try { // try from 00996878 to 0099687f has its CatchHandler @ 00997128 */
            lVar21 = Bt2PhysicsRBObject::getObjectFromRigidBody((btRigidBody *)ppppppuVar23);
            if (lVar21 != 0) {
              lVar21 = *(long *)(lVar21 + 0x28);
              local_480._0_1_ = 0x2b;
              if (!bVar4) {
                local_480._0_1_ = 0x2d;
              }
              __strcpy_chk(uVar22,*(undefined8 *)(lVar21 + 8),0xff);
                    /* try { // try from 009968ac to 009968b7 has its CatchHandler @ 00997140 */
              lVar10 = __strlen_chk(uVar22,0xff);
              puVar1 = (undefined4 *)(uVar22 + lVar10);
                    /* try { // try from 009968c8 to 009968eb has its CatchHandler @ 00997120 */
              if (((*(byte *)(lVar21 + 0x11) >> 3 & 1) == 0) ||
                 (lVar21 = Geometry::getCollisionProxyMesh(), lVar21 == 0)) {
                *(undefined *)(puVar1 + 1) = 0;
                *puVar1 = 0x293f2820;
              }
              else {
                uVar6 = TriangleSet::getNumVertices();
                FUN_009974d4(puVar1,0xffffffffffffffff," (%u)",uVar6);
              }
                    /* try { // try from 00996900 to 0099690b has its CatchHandler @ 00997140 */
              __strlen_chk(puVar1,0xffffffffffffffff);
                    /* try { // try from 00996910 to 0099691b has its CatchHandler @ 00997118 */
              local_7d8 = ppppppuVar23;
              local_7d0[0] = (undefined **)&local_480;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<btCollisionObject_const*,std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<btCollisionObject_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::__emplace_unique_impl<std::__ndk1::pair<btRigidBody_const*,char*>>
                        ((pair *)&local_910);
              if (bVar4) {
                sVar11 = strlen((char *)&local_480);
                    /* try { // try from 0099692c to 00996947 has its CatchHandler @ 00997140 */
                pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   ((basic_ostream *)&local_6d0,(char *)&local_480,sVar11);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar8,"\n",1);
              }
            }
          }
          iVar5 = *(int *)(param_1 + 0xc);
        }
        else {
          do {
            pppppppuVar12 = pppppppuVar13;
            pppppppuVar14 = pppppppuVar15;
            ppppppuVar17 = pppppppuVar14[4];
            pppppppuVar13 = pppppppuVar12;
            if (ppppppuVar17 >= ppppppuVar23) {
              pppppppuVar13 = pppppppuVar14;
            }
            pppppppuVar15 = (undefined8 *******)pppppppuVar14[ppppppuVar17 < ppppppuVar23];
          } while ((undefined8 *******)pppppppuVar14[ppppppuVar17 < ppppppuVar23] !=
                   (undefined8 *******)0x0);
          if ((undefined8 ********)pppppppuVar13 == &local_908) goto LAB_009967b8;
          if (ppppppuVar23 <= ppppppuVar17) {
            pppppppuVar12 = pppppppuVar14;
          }
          if (ppppppuVar23 < pppppppuVar12[4]) goto LAB_009967b8;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar5);
    }
    local_7d8 = (undefined8 *****)0xfd8f40;
    local_768[0] = (undefined **)0xfd8f68;
                    /* try { // try from 00996970 to 0099697b has its CatchHandler @ 009970ac */
    std::__ndk1::ios_base::init(local_768);
    local_6e0 = 0;
    local_6d8 = 0xffffffff;
    local_7d8 = (undefined8 *****)&PTR__basic_ostringstream_00fd8ed0;
    local_768[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 009969a0 to 009969ab has its CatchHandler @ 00997090 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_870[0] = (undefined **)0xfd8f68;
    local_770 = 0x10;
    local_8e0 = (undefined **)0xfd8f40;
    uStack_788 = 0;
    local_790 = 0;
    local_7d0[0] = &PTR__basic_stringbuf_00fd8fa0;
    uStack_778 = 0;
    local_780 = (void *)0x0;
                    /* try { // try from 009969f0 to 009969ff has its CatchHandler @ 00997080 */
    std::__ndk1::ios_base::init(local_870);
    local_7e8 = 0;
    local_7e0 = 0xffffffff;
    local_8e0 = &PTR__basic_ostringstream_00fd8ed0;
    local_870[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 00996a28 to 00996a33 has its CatchHandler @ 00997064 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_878 = 0x10;
    local_8d8[0] = &PTR__basic_stringbuf_00fd8fa0;
    uVar18 = 0;
    uStack_890 = 0;
    local_898 = 0;
    uStack_880 = 0;
    local_888 = (void *)0x0;
    while( true ) {
                    /* try { // try from 00996aa8 to 00996aaf has its CatchHandler @ 00997170 */
      Bt2PhysicsContextManager::getInstance();
      uVar7 = Bt2PhysicsContextManager::getNumCollisionTimes();
      if (uVar7 <= uVar18) break;
                    /* try { // try from 00996ab8 to 00996acb has its CatchHandler @ 0099716c */
      this_00 = (Bt2PhysicsContextManager *)Bt2PhysicsContextManager::getInstance();
      fVar24 = (float)Bt2PhysicsContextManager::getCollisionTimeByIndex
                                (this_00,uVar18,(btCollisionObject **)&local_918,
                                 (btCollisionObject **)&local_920);
      pppppppuVar13 = &local_908;
      pppppppuVar15 = local_908;
      if (local_908 == (undefined8 *******)0x0) {
LAB_00996b20:
        pppppppuVar13 = &local_908;
      }
      else {
        do {
          pppppppuVar14 = pppppppuVar15;
          pppppppuVar12 = pppppppuVar13;
          ppppppuVar23 = pppppppuVar14[4];
          pppppppuVar13 = pppppppuVar12;
          if (ppppppuVar23 >= local_918) {
            pppppppuVar13 = pppppppuVar14;
          }
          pppppppuVar15 = (undefined8 *******)pppppppuVar14[ppppppuVar23 < local_918];
        } while ((undefined8 *******)pppppppuVar14[ppppppuVar23 < local_918] !=
                 (undefined8 *******)0x0);
        if ((undefined8 ********)pppppppuVar13 == &local_908) goto LAB_00996b20;
        if (local_918 <= ppppppuVar23) {
          pppppppuVar12 = pppppppuVar14;
        }
        if (local_918 < pppppppuVar12[4]) goto LAB_00996b20;
      }
      pppppppuVar15 = &local_908;
      pppppppuVar12 = local_908;
      if (local_908 == (undefined8 *******)0x0) {
LAB_00996b6c:
        pppppppuVar15 = &local_908;
      }
      else {
        do {
          pppppppuVar16 = pppppppuVar12;
          pppppppuVar14 = pppppppuVar15;
          ppppppuVar23 = pppppppuVar16[4];
          pppppppuVar15 = pppppppuVar14;
          if (ppppppuVar23 >= local_920) {
            pppppppuVar15 = pppppppuVar16;
          }
          pppppppuVar12 = (undefined8 *******)pppppppuVar16[ppppppuVar23 < local_920];
        } while ((undefined8 *******)pppppppuVar16[ppppppuVar23 < local_920] !=
                 (undefined8 *******)0x0);
        if ((undefined8 ********)pppppppuVar15 == &local_908) goto LAB_00996b6c;
        if (local_920 <= ppppppuVar23) {
          pppppppuVar14 = pppppppuVar16;
        }
        if (local_920 < pppppppuVar14[4]) goto LAB_00996b6c;
      }
      ppppppuVar23 = (undefined8 ******)&DAT_004f9f4b;
      if ((undefined8 ********)pppppppuVar13 != &local_908) {
        ppppppuVar23 = (undefined8 ******)((long)pppppppuVar13 + 0x29);
        if ((*(byte *)(pppppppuVar13 + 5) & 1) != 0) {
          ppppppuVar23 = pppppppuVar13[7];
        }
      }
      ppppppuVar17 = (undefined8 ******)&DAT_004f9f4b;
      if ((undefined8 ********)pppppppuVar15 != &local_908) {
        ppppppuVar17 = (undefined8 ******)((long)pppppppuVar15 + 0x29);
        if ((*(byte *)(pppppppuVar15 + 5) & 1) != 0) {
          ppppppuVar17 = pppppppuVar15[7];
        }
      }
                    /* try { // try from 00996bbc to 00996bcb has its CatchHandler @ 00997168 */
      FUN_009974d4(&local_480,0x400,"%s vs %s",ppppppuVar23,ppppppuVar17);
      sVar11 = strlen((char *)&local_480);
                    /* try { // try from 00996bd8 to 00996c67 has its CatchHandler @ 00997184 */
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_7d8,(char *)&local_480,sVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
      if (0.0 <= fVar24) {
        FUN_009974d4(acStack_4a0,0x20," %u us",(int)fVar24);
      }
      else {
        FUN_009974d4(acStack_4a0,0x20,&DAT_0050a39f);
      }
      sVar11 = strlen(acStack_4a0);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_8e0,acStack_4a0,sVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
      if (BVar2 != (Bt2PhysicsStats)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00996c78 to 00996c7f has its CatchHandler @ 0099703c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s %s\n",
                          acStack_4a0,&local_480);
      }
      uVar18 = uVar18 + 1;
    }
                    /* try { // try from 00996cac to 00996d33 has its CatchHandler @ 00997138 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0x70),'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0x88),'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0xa0),'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0xb8),'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0xd0),'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0xe8),'\0');
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(this + 0x100),'\0');
                    /* try { // try from 00996d34 to 00996dbf has its CatchHandler @ 0099713c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x70));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x88));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0xa0));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0xb8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0xd0));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0xe8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x100));
    pCVar19 = *(CProfileIterator **)(this + 0x118);
    fVar24 = (float)CProfileManager::Get_Time_Since_Reset();
    writeProfiler(this,pCVar19,0,fVar24);
                    /* try { // try from 00996dc0 to 00996dcb has its CatchHandler @ 00997060 */
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if ((*(byte *)(this + 0x10) & 1) != 0) {
      operator_delete(*(void **)(this + 0x20));
    }
    *(undefined8 *)(this + 0x18) = uStack_478;
    *(ulong *)(this + 0x10) = CONCAT71(local_480._1_7_,(undefined)local_480);
    *(undefined8 *)(this + 0x20) = local_470;
                    /* try { // try from 00996df8 to 00996e03 has its CatchHandler @ 0099705c */
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if ((*(byte *)(this + 0x28) & 1) != 0) {
      operator_delete(*(void **)(this + 0x38));
    }
    *(undefined8 *)(this + 0x30) = uStack_478;
    *(ulong *)(this + 0x28) = CONCAT71(local_480._1_7_,(undefined)local_480);
    *(undefined8 *)(this + 0x38) = local_470;
                    /* try { // try from 00996e30 to 00996e3b has its CatchHandler @ 00997058 */
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if ((*(byte *)(this + 0x40) & 1) != 0) {
      operator_delete(*(void **)(this + 0x50));
    }
    *(undefined8 *)(this + 0x48) = uStack_478;
    *(ulong *)(this + 0x40) = CONCAT71(local_480._1_7_,(undefined)local_480);
    *(undefined8 *)(this + 0x50) = local_470;
                    /* try { // try from 00996e68 to 00996e73 has its CatchHandler @ 00997054 */
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if ((*(byte *)(this + 0x58) & 1) != 0) {
      operator_delete(*(void **)(this + 0x68));
    }
    *(undefined8 *)(this + 0x60) = uStack_478;
    *(ulong *)(this + 0x58) = CONCAT71(local_480._1_7_,(undefined)local_480);
    *(undefined8 *)(this + 0x68) = local_470;
    *(undefined2 *)(this + 10) = 0x100;
    local_8e0 = &PTR__basic_ostringstream_00fd8ed0;
    local_8d8[0] = &PTR__basic_stringbuf_00fd8fa0;
    local_870[0] = &PTR__basic_ostringstream_00fd8ef8;
    if ((local_898 & 1) != 0) {
      operator_delete(local_888);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_8d8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_8e0);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_870);
    local_7d8 = (undefined8 *****)&PTR__basic_ostringstream_00fd8ed0;
    local_7d0[0] = &PTR__basic_stringbuf_00fd8fa0;
    local_768[0] = &PTR__basic_ostringstream_00fd8ef8;
    if ((local_790 & 1) != 0) {
      operator_delete(local_780);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_7d0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_7d8);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_768);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<btCollisionObject_const*,std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<btCollisionObject_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<btCollisionObject_const*,std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<btCollisionObject_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               *)&local_910,(__tree_node *)local_908);
    local_660[0] = &PTR__basic_ostringstream_00fd8ef8;
    local_6d0 = &PTR__basic_ostringstream_00fd8ed0;
    local_6c8[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_688 & 1) != 0) {
      operator_delete(local_678);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_6c8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_6d0);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_660);
    if ((local_5b8 != (void *)0x0) && (local_5b0 != '\0')) {
                    /* try { // try from 00996fac to 00996faf has its CatchHandler @ 00997050 */
      btAlignedFreeInternal(local_5b8);
    }
    local_538[0] = &PTR__basic_ostringstream_00fd8ef8;
    local_5a8 = &PTR__basic_ostringstream_00fd8ed0;
    local_5a0[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_560 & 1) != 0) {
      operator_delete(local_550);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_5a0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_5a8);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_538);
  }
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


