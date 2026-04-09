// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteDescriptorBinding
// Entry Point: 00aea504
// Size: 5304 bytes
// Signature: undefined __thiscall WriteDescriptorBinding(SpvReflectToYaml * this, basic_ostream * param_1, SpvReflectDescriptorBinding * param_2, uint param_3)


/* WARNING: Type propagation algorithm not settling */
/* SpvReflectToYaml::WriteDescriptorBinding(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, SpvReflectDescriptorBinding const&, unsigned int) */

void __thiscall
SpvReflectToYaml::WriteDescriptorBinding
          (SpvReflectToYaml *this,basic_ostream *param_1,SpvReflectDescriptorBinding *param_2,
          uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  SpvReflectDescriptorBinding *pSVar7;
  SpvReflectToYaml **ppSVar8;
  SpvReflectToYaml **ppSVar9;
  SpvReflectToYaml *pSVar10;
  undefined4 uVar11;
  SpvReflectToYaml **ppSVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  void *pvVar18;
  char *pcVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined8 *puVar22;
  id local_100 [8];
  ulong local_f8;
  char *local_f0;
  id local_e8;
  undefined2 local_e7;
  undefined uStack_e5;
  undefined uStack_e4;
  undefined uStack_e3;
  undefined uStack_e2;
  undefined uStack_e1;
  undefined uStack_e0;
  undefined2 uStack_df;
  undefined uStack_dd;
  uint uStack_dc;
  char *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 local_a0;
  ulong local_98;
  char *local_90;
  undefined8 local_88;
  ulong local_80;
  char *local_78;
  id aiStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pSVar7 = *(SpvReflectDescriptorBinding **)(param_2 + 0x230);
  if (pSVar7 != (SpvReflectDescriptorBinding *)0x0) {
    ppSVar8 = (SpvReflectToYaml **)(this + 0x48);
    ppSVar12 = (SpvReflectToYaml **)*ppSVar8;
    ppSVar9 = ppSVar8;
    if (ppSVar12 != (SpvReflectToYaml **)0x0) {
      do {
        if (ppSVar12[4] >= pSVar7) {
          ppSVar9 = ppSVar12;
        }
        ppSVar12 = (SpvReflectToYaml **)ppSVar12[ppSVar12[4] < pSVar7];
      } while (ppSVar12 != (SpvReflectToYaml **)0x0);
      if ((ppSVar9 != ppSVar8) && (ppSVar9[4] <= pSVar7)) goto LAB_00aea594;
    }
    WriteDescriptorBinding(this,param_1,pSVar7,param_3);
  }
LAB_00aea594:
  uVar14 = param_3 * 2;
  uVar15 = (ulong)uVar14;
  if (uVar14 < 0x17) {
    local_88 = CONCAT71(local_88._1_7_,(char)(param_3 << 2));
    if (uVar14 != 0) {
      pcVar19 = (char *)((ulong)&local_88 | 1);
      goto LAB_00aea5d8;
    }
    pcVar19 = (char *)((ulong)&local_a0 | 1);
    uVar17 = 2;
    *(undefined *)((long)&local_88 + uVar15 + 1) = 0;
    local_a0 = CONCAT71(local_a0._1_7_,(char)param_3 * '\x04' + '\x04');
LAB_00aea654:
    memset(pcVar19,0x20,uVar17);
  }
  else {
    uVar17 = uVar15 + 0x10 & 0x1fffffff0;
    pcVar19 = (char *)operator_new(uVar17);
    local_88 = uVar17 | 1;
    local_80 = uVar15;
    local_78 = pcVar19;
LAB_00aea5d8:
    memset(pcVar19,0x20,uVar15);
    uVar2 = uVar14 + 2;
    uVar17 = (ulong)uVar2;
    pcVar19[uVar15] = '\0';
    if (0x16 < uVar2) {
      uVar15 = uVar17 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00aea618 to 00aea61f has its CatchHandler @ 00aeb9d8 */
      pcVar19 = (char *)operator_new(uVar15);
      local_a0 = uVar15 | 1;
      local_98 = uVar17;
      local_90 = pcVar19;
      goto LAB_00aea654;
    }
    pcVar19 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)uVar2 * '\x02');
    if (uVar2 != 0) goto LAB_00aea654;
  }
  uVar2 = uVar14 + 4;
  uVar15 = (ulong)uVar2;
  pcVar19[uVar17] = '\0';
  if (uVar2 < 0x17) {
    local_b8 = CONCAT71(local_b8._1_7_,(char)uVar2 * '\x02');
    if (uVar2 != 0) {
      pvVar18 = (void *)((ulong)&local_b8 | 1);
      goto LAB_00aea6ac;
    }
    pvVar18 = (void *)((ulong)&local_d0 | 1);
    uVar17 = 2;
    *(undefined *)((long)&local_b8 + uVar15 + 1) = 0;
    local_d0 = CONCAT71(local_d0._1_7_,(char)param_3 * '\x04' + '\f');
LAB_00aea728:
    memset(pvVar18,0x20,uVar17);
  }
  else {
    uVar17 = uVar15 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00aea694 to 00aea69b has its CatchHandler @ 00aeb9e8 */
    pvVar18 = operator_new(uVar17);
    local_b8 = uVar17 | 1;
    local_b0 = uVar15;
    local_a8 = pvVar18;
LAB_00aea6ac:
    memset(pvVar18,0x20,uVar15);
    uVar14 = uVar14 + 6;
    uVar17 = (ulong)uVar14;
    *(undefined *)((long)pvVar18 + uVar15) = 0;
    if (0x16 < uVar14) {
      uVar15 = uVar17 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00aea6ec to 00aea6f3 has its CatchHandler @ 00aeb9c8 */
      pvVar18 = operator_new(uVar15);
      local_d0 = uVar15 | 1;
      local_c8 = uVar17;
      local_c0 = pvVar18;
      goto LAB_00aea728;
    }
    pvVar18 = (void *)((ulong)&local_d0 | 1);
    local_d0 = CONCAT71(local_d0._1_7_,(char)uVar14 * '\x02');
    if (uVar14 != 0) goto LAB_00aea728;
  }
  *(undefined *)((long)pvVar18 + uVar17) = 0;
  puVar22 = (undefined8 *)(this + 0x48);
  puVar20 = (undefined8 *)*puVar22;
  puVar13 = puVar20;
  puVar16 = puVar22;
  if (puVar20 == (undefined8 *)0x0) {
    uVar14 = (uint)*(undefined8 *)(this + 0x50);
    puVar13 = puVar22;
  }
  else {
    do {
      if ((SpvReflectDescriptorBinding *)puVar13[4] >= param_2) {
        puVar16 = puVar13;
      }
      puVar1 = puVar13 + ((SpvReflectDescriptorBinding *)puVar13[4] < param_2);
      puVar13 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    if ((puVar16 != puVar22) && ((SpvReflectDescriptorBinding *)puVar16[4] <= param_2)) {
      uVar15 = local_88 >> 1 & 0x7f;
      pcVar19 = (char *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        uVar15 = local_80;
        pcVar19 = local_78;
      }
                    /* try { // try from 00aea828 to 00aea85f has its CatchHandler @ 00aeba18 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar19,uVar15);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *db",5);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(uint *)(puVar16 + 5));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea860 to 00aea87f has its CatchHandler @ 00aeb9c4 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aea88c to 00aea89f has its CatchHandler @ 00aeba18 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      goto LAB_00aeb92c;
    }
    uVar14 = (uint)*(undefined8 *)(this + 0x50);
    puVar16 = (undefined8 *)(this + 0x48);
    do {
      while (puVar13 = puVar20, param_2 < (SpvReflectDescriptorBinding *)puVar13[4]) {
        puVar20 = (undefined8 *)*puVar13;
        puVar16 = puVar13;
        if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
          puVar20 = (undefined8 *)*puVar13;
          goto joined_r0x00aea8ac;
        }
      }
      if (param_2 <= (SpvReflectDescriptorBinding *)puVar13[4]) break;
      puVar16 = puVar13 + 1;
      puVar20 = (undefined8 *)*puVar16;
    } while ((undefined8 *)*puVar16 != (undefined8 *)0x0);
  }
  puVar20 = (undefined8 *)*puVar16;
joined_r0x00aea8ac:
  if (puVar20 == (undefined8 *)0x0) {
                    /* try { // try from 00aea7d0 to 00aea7d7 has its CatchHandler @ 00aeb9bc */
    puVar20 = (undefined8 *)operator_new(0x30);
    puVar20[4] = param_2;
    *(undefined4 *)(puVar20 + 5) = 0;
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = puVar13;
    *puVar16 = puVar20;
    puVar13 = puVar20;
    if (**(long **)(this + 0x40) != 0) {
      *(long *)(this + 0x40) = **(long **)(this + 0x40);
      puVar13 = (undefined8 *)*puVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),(__tree_node_base *)puVar13);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  *(uint *)(puVar20 + 5) = uVar14;
  uVar15 = local_88 >> 1 & 0x7f;
  pcVar19 = (char *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    uVar15 = local_80;
    pcVar19 = local_78;
  }
                    /* try { // try from 00aea8f0 to 00aea927 has its CatchHandler @ 00aebb04 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"- &db",5);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea928 to 00aea947 has its CatchHandler @ 00aeba6c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aea954 to 00aea9bf has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar21 = (char *)((ulong)&local_a0 | 1);
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"spirv_id: ",10);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)param_2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea9c0 to 00aea9df has its CatchHandler @ 00aeba68 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aea9ec to 00aeaa2f has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pcVar19 = "name: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"name: ",6);
                    /* try { // try from 00aeaa38 to 00aeaa43 has its CatchHandler @ 00aeba10 */
  SafeString(*(SpvReflectToYaml **)(param_2 + 8),pcVar19);
  uVar15 = (ulong)((byte)local_e8 >> 1);
  pcVar19 = (char *)((ulong)&local_e8 | 1);
  if (((byte)local_e8 & 1) != 0) {
    uVar15 = CONCAT44(uStack_dc,CONCAT13(uStack_dd,CONCAT21(uStack_df,uStack_e0)));
    pcVar19 = local_d8;
  }
                    /* try { // try from 00aeaa60 to 00aeaa7f has its CatchHandler @ 00aebab8 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar19,uVar15);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeaa80 to 00aeaa9f has its CatchHandler @ 00aeba58 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_100);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_100);
                    /* try { // try from 00aeaaac to 00aeaabf has its CatchHandler @ 00aebab8 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
                    /* try { // try from 00aeaae8 to 00aeab1f has its CatchHandler @ 00aebb04 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"binding: ",9);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x10));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeab20 to 00aeab3f has its CatchHandler @ 00aeba54 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeab4c to 00aeabaf has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"input_attachment_index: ",0x18);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x14));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeabb0 to 00aeabcf has its CatchHandler @ 00aeba50 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeabdc to 00aeac3f has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"set: ",5);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x18));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeac40 to 00aeac5f has its CatchHandler @ 00aeba4c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeac6c to 00aeacc7 has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"descriptor_type: ",0x11);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x1c));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aeacd0 to 00aeacdb has its CatchHandler @ 00aeba0c */
  ToStringDescriptorType(*(SpvReflectDescriptorType *)(param_2 + 0x1c));
  uVar15 = (ulong)((byte)local_e8 >> 1);
  pcVar19 = (char *)((ulong)&local_e8 | 1);
  if (((byte)local_e8 & 1) != 0) {
    uVar15 = CONCAT44(uStack_dc,CONCAT13(uStack_dd,CONCAT21(uStack_df,uStack_e0)));
    pcVar19 = local_d8;
  }
                    /* try { // try from 00aeacf8 to 00aead17 has its CatchHandler @ 00aebab4 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar19,uVar15);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aead18 to 00aead37 has its CatchHandler @ 00aeba48 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_100);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_100);
                    /* try { // try from 00aead44 to 00aead57 has its CatchHandler @ 00aebab4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
                    /* try { // try from 00aead80 to 00aeadaf has its CatchHandler @ 00aebb04 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"resource_type: ",0xf);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x20));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 0:
    uVar15 = 9;
    local_e8 = (id)0x12;
    uStack_df = 0x44;
    local_e7 = 0x4e55;
    uStack_e5 = 0x44;
    uStack_e4 = 0x45;
    uStack_e3 = 0x46;
    uStack_e2 = 0x49;
    uStack_e1 = 0x4e;
    uStack_e0 = 0x45;
    goto LAB_00aeae60;
  case 1:
    uVar15 = 7;
    uStack_e0 = 0;
    local_e8 = (id)0xe;
    local_e7 = 0x4153;
    uStack_e5 = 0x4d;
    uStack_e4 = 0x50;
    uStack_e3 = 0x4c;
    uStack_e2 = 0x45;
    uStack_e1 = 0x52;
    goto LAB_00aeae60;
  case 2:
    uVar14 = 0x4243;
    break;
  default:
    uVar14 = 0x3f3f3f;
    goto LAB_00aeae54;
  case 4:
    uVar14 = 0x5253;
    break;
  case 8:
    uVar14 = 0x4155;
  }
  uVar14 = uVar14 | 0x560000;
LAB_00aeae54:
  uVar15 = 3;
  local_e8 = (id)0x6;
  local_e7 = (undefined2)uVar14;
  uStack_e5 = (undefined)(uVar14 >> 0x10);
  uStack_e4 = 0;
LAB_00aeae60:
                    /* try { // try from 00aeae68 to 00aeae83 has its CatchHandler @ 00aebab0 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,(char *)((ulong)&local_e8 | 1),uVar15);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeae84 to 00aeaea3 has its CatchHandler @ 00aeba44 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_100);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_100);
                    /* try { // try from 00aeaeb0 to 00aeaec3 has its CatchHandler @ 00aebab0 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
                    /* try { // try from 00aeaeec to 00aeb01f has its CatchHandler @ 00aebb04 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"image: { ",9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dim: ",5);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x24));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"depth: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x28));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"arrayed: ",9);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x2c));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"ms: ",4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"sampled: ",9);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x34));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"image_format: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(int *)(param_2 + 0x38));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # dim=",7);
  switch(*(uint *)(param_2 + 0x24)) {
  case 0:
    local_e7 = 0x4431;
    goto LAB_00aeb090;
  case 1:
    local_e7 = 0x4432;
    goto LAB_00aeb090;
  case 2:
    local_e7 = 0x4433;
LAB_00aeb090:
    uVar15 = 2;
    local_e8 = (id)0x4;
    uStack_e5 = 0;
    break;
  case 3:
    uVar11 = 0x65627543;
    goto LAB_00aeb0b0;
  case 4:
    uVar11 = 0x74636552;
LAB_00aeb0b0:
    uVar15 = 4;
    local_e8 = (id)0x8;
    local_e7 = (undefined2)uVar11;
    uStack_e5 = (undefined)((uint)uVar11 >> 0x10);
    uStack_e4 = (undefined)((uint)uVar11 >> 0x18);
    uStack_e3 = 0;
    break;
  case 5:
    uVar15 = 6;
    uStack_e1 = 0;
    local_e8 = (id)0xc;
    local_e7 = 0x7542;
    uStack_e5 = 0x66;
    uStack_e4 = 0x66;
    uStack_e3 = 0x65;
    uStack_e2 = 0x72;
    break;
  case 6:
    uVar15 = 0xb;
    uStack_dc = uStack_dc & 0xffffff00;
    local_e8 = (id)0x16;
    uStack_df = 0x7461;
    uStack_dd = 0x61;
    local_e7 = 0x7553;
    uStack_e5 = 0x62;
    uStack_e4 = 0x70;
    uStack_e3 = 0x61;
    uStack_e2 = 0x73;
    uStack_e1 = 0x73;
    uStack_e0 = 0x44;
    break;
  default:
    uVar15 = 3;
    local_e8 = (id)0x6;
    local_e7 = 0x3f3f;
    uStack_e5 = 0x3f;
    uStack_e4 = 0;
  }
                    /* try { // try from 00aeb120 to 00aeb133 has its CatchHandler @ 00aeba40 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,(char *)((ulong)&local_e8 | 1),uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," image_format=",0xe);
                    /* try { // try from 00aeb13c to 00aeb147 has its CatchHandler @ 00aeba08 */
  ToStringSpvImageFormat(*(SpvImageFormat_ *)(param_2 + 0x38));
  uVar15 = (ulong)((byte)local_100[0] >> 1);
  pcVar19 = (char *)((ulong)local_100 | 1);
  if (((byte)local_100[0] & 1) != 0) {
    uVar15 = local_f8;
    pcVar19 = local_f0;
  }
                    /* try { // try from 00aeb164 to 00aeb183 has its CatchHandler @ 00aeba98 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar19,uVar15);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb184 to 00aeb1a3 has its CatchHandler @ 00aeba30 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_70);
                    /* try { // try from 00aeb1b0 to 00aeb1c3 has its CatchHandler @ 00aeba98 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  ppSVar9 = (SpvReflectToYaml **)(this + 0x30);
  ppSVar8 = (SpvReflectToYaml **)*ppSVar9;
  if (ppSVar8 == (SpvReflectToYaml **)0x0) {
LAB_00aeb224:
    ppSVar12 = ppSVar9;
  }
  else {
    pSVar10 = (SpvReflectToYaml *)(param_2 + 0x40);
    ppSVar12 = ppSVar9;
    do {
      if (ppSVar8[4] >= pSVar10) {
        ppSVar12 = ppSVar8;
      }
      ppSVar8 = (SpvReflectToYaml **)ppSVar8[ppSVar8[4] < pSVar10];
    } while (ppSVar8 != (SpvReflectToYaml **)0x0);
    if ((ppSVar12 == ppSVar9) || (pSVar10 < ppSVar12[4])) goto LAB_00aeb224;
  }
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
                    /* try { // try from 00aeb240 to 00aeb26f has its CatchHandler @ 00aeba94 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"block: *bv",10);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(ppSVar12 + 5));
  pcVar19 = " # ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aeb278 to 00aeb283 has its CatchHandler @ 00aeba04 */
  SafeString(*(SpvReflectToYaml **)(param_2 + 0x48),pcVar19);
  uVar15 = (ulong)((byte)local_e8 >> 1);
  pcVar19 = (char *)((ulong)&local_e8 | 1);
  if (((byte)local_e8 & 1) != 0) {
    uVar15 = CONCAT44(uStack_dc,CONCAT13(uStack_dd,CONCAT21(uStack_df,uStack_e0)));
    pcVar19 = local_d8;
  }
                    /* try { // try from 00aeb2a0 to 00aeb2bf has its CatchHandler @ 00aeba90 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar19,uVar15);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb2c0 to 00aeb2df has its CatchHandler @ 00aeba2c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_100);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_100);
                    /* try { // try from 00aeb2ec to 00aeb2ff has its CatchHandler @ 00aeba90 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
                    /* try { // try from 00aeb328 to 00aeb37f has its CatchHandler @ 00aebb04 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"array: { ",9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dims_count: ",0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x1a0));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"dims: [",7);
  if (*(int *)(param_2 + 0x1a0) != 0) {
    uVar15 = 0;
    do {
                    /* try { // try from 00aeb39c to 00aeb3af has its CatchHandler @ 00aebb00 */
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                          *(uint *)(param_2 + uVar15 * 4 + 0x1a4));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",",1);
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_2 + 0x1a0));
  }
                    /* try { // try from 00aeb3c0 to 00aeb3eb has its CatchHandler @ 00aebb04 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"] }",3);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb3ec to 00aeb40b has its CatchHandler @ 00aeba28 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb418 to 00aeb47b has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"accessed: ",10);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x228));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb47c to 00aeb49b has its CatchHandler @ 00aeba24 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb4a8 to 00aeb50b has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = local_a0 >> 1 & 0x7f;
  pcVar19 = pcVar21;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar19 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"uav_counter_id: ",0x10);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x22c));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb50c to 00aeb52b has its CatchHandler @ 00aeba20 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb538 to 00aeb54b has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar15 = *(ulong *)(param_2 + 0x230);
  if (uVar15 == 0) {
    uVar15 = (ulong)((byte)local_a0 >> 1);
    pcVar19 = pcVar21;
    if ((local_a0 & 1) != 0) {
      uVar15 = local_98;
      pcVar19 = local_90;
    }
                    /* try { // try from 00aeb698 to 00aeb6c7 has its CatchHandler @ 00aebb04 */
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar19,uVar15);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"uav_counter_binding:",0x14);
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb6c8 to 00aeb6e7 has its CatchHandler @ 00aeb9fc */
    plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb6f4 to 00aeb707 has its CatchHandler @ 00aebb04 */
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  }
  else {
    puVar13 = (undefined8 *)*puVar22;
    puVar16 = puVar22;
    if (puVar13 == (undefined8 *)0x0) {
LAB_00aeb58c:
      puVar16 = puVar22;
    }
    else {
      do {
        if ((ulong)puVar13[4] >= uVar15) {
          puVar16 = puVar13;
        }
        puVar13 = (undefined8 *)puVar13[(ulong)puVar13[4] < uVar15];
      } while (puVar13 != (undefined8 *)0x0);
      if ((puVar16 == puVar22) || (uVar15 < (ulong)puVar16[4])) goto LAB_00aeb58c;
    }
    uVar15 = (ulong)((byte)local_a0 >> 1);
    pcVar19 = pcVar21;
    if ((local_a0 & 1) != 0) {
      uVar15 = local_98;
      pcVar19 = local_90;
    }
                    /* try { // try from 00aeb5a8 to 00aeb5d7 has its CatchHandler @ 00aeba8c */
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar19,uVar15);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"uav_counter_binding: *db",0x18);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(uint *)(puVar16 + 5));
    pcVar19 = " # ";
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," # ",3);
                    /* try { // try from 00aeb5e4 to 00aeb5ef has its CatchHandler @ 00aeb9f8 */
    SafeString(*(SpvReflectToYaml **)(*(long *)(param_2 + 0x230) + 8),pcVar19);
    uVar15 = (ulong)((byte)local_e8 >> 1);
    pcVar19 = (char *)((ulong)&local_e8 | 1);
    if (((byte)local_e8 & 1) != 0) {
      uVar15 = CONCAT44(uStack_dc,CONCAT13(uStack_dd,CONCAT21(uStack_df,uStack_e0)));
      pcVar19 = local_d8;
    }
                    /* try { // try from 00aeb60c to 00aeb62b has its CatchHandler @ 00aeba88 */
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,pcVar19,uVar15);
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb62c to 00aeb64b has its CatchHandler @ 00aeba14 */
    plVar6 = (long *)std::__ndk1::locale::use_facet(local_100);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)local_100);
                    /* try { // try from 00aeb658 to 00aeb66b has its CatchHandler @ 00aeba88 */
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (((byte)local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
  }
  if (*(int *)(this + 8) != 0) {
    pSVar10 = *(SpvReflectToYaml **)(param_2 + 0x238);
    if (pSVar10 == (SpvReflectToYaml *)0x0) {
      uVar15 = (ulong)((byte)local_a0 >> 1);
      pcVar19 = pcVar21;
      if ((local_a0 & 1) != 0) {
        uVar15 = local_98;
        pcVar19 = local_90;
      }
                    /* try { // try from 00aeb800 to 00aeb82f has its CatchHandler @ 00aebb04 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar19,uVar15);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"type_description:",0x11);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb830 to 00aeb84f has its CatchHandler @ 00aeb9c0 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb85c to 00aeb8eb has its CatchHandler @ 00aebb04 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    else {
      ppSVar12 = (SpvReflectToYaml **)(this + 0x18);
      ppSVar8 = (SpvReflectToYaml **)*ppSVar12;
      ppSVar9 = ppSVar12;
      if (ppSVar8 == (SpvReflectToYaml **)0x0) {
LAB_00aeb750:
        ppSVar9 = ppSVar12;
      }
      else {
        do {
          if (ppSVar8[4] >= pSVar10) {
            ppSVar9 = ppSVar8;
          }
          ppSVar8 = (SpvReflectToYaml **)ppSVar8[ppSVar8[4] < pSVar10];
        } while (ppSVar8 != (SpvReflectToYaml **)0x0);
        if ((ppSVar9 == ppSVar12) || (pSVar10 < ppSVar9[4])) goto LAB_00aeb750;
      }
      uVar15 = (ulong)((byte)local_a0 >> 1);
      pcVar19 = pcVar21;
      if ((local_a0 & 1) != 0) {
        uVar15 = local_98;
        pcVar19 = local_90;
      }
                    /* try { // try from 00aeb76c to 00aeb7a3 has its CatchHandler @ 00aeba84 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar19,uVar15);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"type_description: *td",0x15);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(uint *)(ppSVar9 + 5));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb7a4 to 00aeb7c3 has its CatchHandler @ 00aeba00 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb7d0 to 00aeb7e3 has its CatchHandler @ 00aeba84 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
  }
  uVar15 = local_a0 >> 1 & 0x7f;
  if ((local_a0 & 1) != 0) {
    uVar15 = local_98;
    pcVar21 = local_90;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar21,uVar15);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"word_offset: { binding: ",0x18);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x240)
            );
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", set: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x244));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeb8ec to 00aeb90b has its CatchHandler @ 00aeba1c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_e8);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_e8);
                    /* try { // try from 00aeb918 to 00aeb92b has its CatchHandler @ 00aebb04 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
LAB_00aeb92c:
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


