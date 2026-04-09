// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElement
// Entry Point: 00b2586c
// Size: 1168 bytes
// Signature: undefined __thiscall getElement(DomXMLFile * this, char * param_1, bool param_2, char * * param_3, bool * param_4)


/* DomXMLFile::getElement(char const*, bool, char const**, bool*) */

XMLNode * __thiscall
DomXMLFile::getElement(DomXMLFile *this,char *param_1,bool param_2,char **param_3,bool *param_4)

{
  XMLNode **ppXVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  XMLNode *this_00;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *__dest;
  DomXMLFile DVar9;
  uint uVar10;
  uint uVar11;
  size_t __n;
  XMLNode *this_01;
  uint *this_02;
  size_t __n_00;
  undefined auStack_c0 [8];
  char **local_b8;
  DomXMLFile *local_b0;
  long local_a8;
  uint local_9c;
  uint *local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  char *local_80;
  XMLNode *local_78;
  uint local_70;
  DomXMLFile local_6c;
  long local_68;
  
  __dest = auStack_c0;
  local_a8 = tpidr_el0;
  this_01 = (XMLNode *)0x0;
  uVar11 = 0;
  local_68 = *(long *)(local_a8 + 0x28);
  this_02 = (uint *)(this + 0x38);
  local_9c = param_2 ^ 1;
  local_b8 = param_3;
  local_b0 = (DomXMLFile *)param_4;
  local_98 = this_02;
  do {
    pcVar6 = param_1 + -2;
    for (__n = 0; 0x2e < (byte)param_1[__n] ||
                  (1L << ((ulong)(byte)param_1[__n] & 0x3f) & 0x400800000001U) == 0; __n = __n + 1)
    {
      pcVar6 = pcVar6 + 1;
    }
    pcVar8 = param_1 + __n;
    local_80 = pcVar8;
    if (this_01 == (XMLNode *)0x0) {
      this_01 = (XMLNode *)
                tinyxml2::XMLNode::FirstChildElement(*(XMLNode **)(this + 0x28),(char *)0x0);
      pcVar6 = (char *)tinyxml2::XMLNode::Value();
      iVar5 = strncasecmp(pcVar6,param_1,__n);
      if ((iVar5 != 0) || (pcVar6[__n] != '\0')) {
LAB_00b25c80:
        this_01 = (XMLNode *)0x0;
        goto LAB_00b25cc4;
      }
      if (*this_02 == 0) {
        local_70 = 0;
        local_6c = (DomXMLFile)0x0;
        local_78 = this_01;
        SmallVector<DomXMLFile::CacheEntry,8u>::push_back
                  ((SmallVector<DomXMLFile::CacheEntry,8u> *)this_02,(CacheEntry *)&local_78);
        DVar9 = (DomXMLFile)0x0;
      }
      else {
        DVar9 = (DomXMLFile)0x0;
      }
    }
    else {
      if (((param_1 < pcVar8) && (param_1[__n - 1] == ')')) && (param_1 < param_1 + (__n - 1))) {
        do {
          pcVar7 = pcVar6;
          if (pcVar7 <= param_1) {
            pcVar7 = pcVar8 + -__n;
            if (pcVar8[-__n] != '(') goto LAB_00b259d0;
            break;
          }
          pcVar6 = pcVar7 + -1;
        } while (*pcVar7 != '(');
        local_84 = atoi(pcVar7 + 1);
        pcVar8 = pcVar7;
      }
      else {
LAB_00b259d0:
        local_84 = 0;
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(this_01,(char *)0x0);
      __n_00 = (long)pcVar8 - (long)param_1;
      if (__n_00 == 1) {
        uVar10 = (uint)(*param_1 == '*');
      }
      else {
        uVar10 = 0;
      }
      DVar9 = SUB41(uVar10,0);
      local_88 = uVar11;
      if (uVar11 < *this_02) {
        ppXVar1 = (XMLNode **)(this + (ulong)uVar11 * 0x10 + 0x3c);
        if (8 < *this_02) {
          ppXVar1 = (XMLNode **)(*(long *)(this + 0xc0) + (ulong)uVar11 * 0x10);
        }
        if (*(byte *)((long)ppXVar1 + 0xc) != uVar10) goto LAB_00b25aa8;
        if (uVar10 == 0) {
          pcVar6 = (char *)tinyxml2::XMLNode::Value();
          iVar5 = strncasecmp(pcVar6,param_1,__n_00);
          if ((iVar5 != 0) || (pcVar6[__n_00] != '\0')) goto LAB_00b25aa8;
        }
        uVar2 = *(uint *)(ppXVar1 + 1);
        uVar3 = local_84 - uVar2;
        uVar11 = -uVar3;
        if (-1 < (int)uVar3) {
          uVar11 = uVar3;
        }
        local_8c = (uint)(uVar3 != 0);
        if (uVar11 < local_84) {
          if (uVar2 < local_84) {
            this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(*ppXVar1,(char *)0x0);
            uVar11 = uVar11 - 1;
          }
          else {
            if (local_84 < uVar2) {
              this_00 = (XMLNode *)tinyxml2::XMLNode::PreviousSiblingElement(*ppXVar1,(char *)0x0);
              bVar4 = false;
              uVar11 = uVar11 - 1;
              goto joined_r0x00b25ab8;
            }
            this_00 = *ppXVar1;
          }
          bVar4 = true;
        }
        else {
          bVar4 = true;
          uVar11 = local_84;
        }
      }
      else {
LAB_00b25aa8:
        bVar4 = true;
        local_8c = 1;
        uVar11 = local_84;
      }
joined_r0x00b25ab8:
      if (this_00 != (XMLNode *)0x0) {
        do {
          if (uVar10 == 0) {
            pcVar6 = (char *)tinyxml2::XMLNode::Value();
            iVar5 = strncasecmp(pcVar6,param_1,__n_00);
            if ((iVar5 == 0) && (pcVar6[__n_00] == '\0')) goto LAB_00b25ad0;
          }
          else {
LAB_00b25ad0:
            if (uVar11 == 0) goto LAB_00b25b74;
            uVar11 = uVar11 - 1;
          }
          if (bVar4) goto code_r0x00b25b0c;
          this_00 = (XMLNode *)tinyxml2::XMLNode::PreviousSiblingElement(this_00,(char *)0x0);
          if (this_00 == (XMLNode *)0x0) break;
        } while( true );
      }
      if ((local_9c & 1 | uVar10) != 0) goto LAB_00b25c80;
      __dest = __dest + -(__n_00 + 0x10 & 0xfffffffffffffff0);
      memcpy(__dest,param_1,__n_00);
      iVar5 = uVar11 + 1;
      __dest[__n_00] = '\0';
      do {
        this_00 = (XMLNode *)
                  tinyxml2::XMLDocument::NewElement(*(XMLDocument **)(this + 0x28),__dest);
        tinyxml2::XMLNode::InsertEndChild(this_01,this_00);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
LAB_00b25b74:
      this_01 = this_00;
      uVar11 = local_88;
      this_02 = local_98;
      if ((this_01 == (XMLNode *)0x0) || (((local_8c ^ 1) & 1) != 0)) {
        if (this_01 == (XMLNode *)0x0) goto LAB_00b25cc4;
      }
      else if (*local_98 == local_88) {
        local_70 = local_84;
        local_78 = this_01;
        local_6c = DVar9;
        SmallVector<DomXMLFile::CacheEntry,8u>::push_back
                  ((SmallVector<DomXMLFile::CacheEntry,8u> *)local_98,(CacheEntry *)&local_78);
      }
      else {
        ppXVar1 = (XMLNode **)(this + (ulong)local_88 * 0x10 + 0x3c);
        if (8 < *local_98) {
          ppXVar1 = (XMLNode **)(*(long *)(this + 0xc0) + (ulong)local_88 * 0x10);
        }
        *ppXVar1 = this_01;
        *(uint *)(ppXVar1 + 1) = local_84;
        *(DomXMLFile *)((long)ppXVar1 + 0xc) = DVar9;
        SmallVector<DomXMLFile::CacheEntry,8u>::resize(local_98,local_88 + 1,0,0,1);
      }
    }
    if (*local_80 == '\0') {
      if (local_b8 != (char **)0x0) {
        *local_b8 = (char *)0x0;
      }
      goto LAB_00b25cb0;
    }
    if (*local_80 == '#') {
      if (local_b8 != (char **)0x0) {
        *local_b8 = param_1 + __n + 1;
      }
LAB_00b25cb0:
      if (local_b0 != (DomXMLFile *)0x0) {
        *local_b0 = DVar9;
      }
LAB_00b25cc4:
      if (*(long *)(local_a8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return this_01;
    }
    param_1 = param_1 + __n + 1;
    uVar11 = uVar11 + 1;
  } while( true );
code_r0x00b25b0c:
  this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
  goto joined_r0x00b25ab8;
}


