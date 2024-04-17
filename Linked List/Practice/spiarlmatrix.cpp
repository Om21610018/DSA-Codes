// vector<vector<int>> res(m, vector<int>(n, -1));
// int r = res.size();
// int c = res[0].size();
// int minr = 0;
// int minc = 0;
// int maxr = r - 1;
// int maxc = c - 1; //  r and c are equal always
// ListNode *temp = head;
// while (minr <= maxr && minc <= maxc)
// {
//     /*

//       *HINT :

//        - right
//        - down
//        - left
//        - up
//        again repeat the steps
//        then break the loop

//        1 loop ke andar 4 loops lagenge
//        4 variables required i.e. minrow , maxrow, mincol, maxcol

//        Right ->  mincol to maxcol  |  (minrow fix)  | minrow++
//        Down  ->  minrow to maxrow  |  (maxcol fix)  | maxcol--
//        Left  ->  maxcol to mincol  |  (maxrow fix)  | maxrow--
//        Up    ->  maxrow to minrow  |  (mincol fix)  | mincol++
//     */

//     for (int j = minc; j <= maxc; j++)
//     {

//         res[minr][j] = temp->val;
//         temp = temp->next;
//     }
//     minr++;
//     if (minr > maxr || minc > maxc) //*most important
//         break;

//     for (int i = minr; i <= maxr; i++)
//     {
//         if (temp == NULL)
//             break;
//         res[i][maxc] = temp->val;
//         temp = temp->next;
//     }
//     maxc--;
//     if (minr > maxr || minc > maxc) //*most important
//         break;
//     for (int j = maxc; j >= minc; j--)
//     {

//         if (temp == NULL)
//             break;
//         res[maxr][j] = temp->val;
//         temp = temp->next;
//     }
//     maxr--;
//     if (minr > maxr || minc > maxc) //*most important
//         break;
//     for (int i = maxr; i >= minr; i--)
//     {

//         if (temp == NULL)
//             break;
//         res[i][minc] = temp->val;
//         temp = temp->next;
//     }
//     minc++;
// }
// return res;
// }