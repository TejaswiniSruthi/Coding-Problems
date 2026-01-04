/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>res(m,vector<int>(n,-1));
        int t=0,l=0;
        m--;
        n--;
        while(head!=NULL){
            for(int i=l;i<=n;i++){
                res[t][i]=head->val;
                head=head->next;
                if(!head){
                    return res;
                }
            }
            
            t++;
            for(int i=t;i<=m;i++){
                res[i][n]=head->val;
                head=head->next;
                if(!head){
                    return res;
                }
            }
            
            n--;
            
            for(int i=n;i>=l;i--){
                res[m][i]=head->val;
                head=head->next;
                if(!head){
                    return res;
                }
            }
            
            m--;
            for(int i=m;i>=t;i--){
                res[i][l]=head->val;
                head=head->next;
                if(!head){
                    return res;
                }
            }
            l++;
        }
        return res;
    }
};
