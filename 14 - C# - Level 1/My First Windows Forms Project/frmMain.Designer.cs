namespace My_First_Windows_Forms_Project
{
    partial class frmMain
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnShowPart1 = new System.Windows.Forms.Button();
            this.btnShowDialog = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnShowPart1
            // 
            this.btnShowPart1.Location = new System.Drawing.Point(61, 58);
            this.btnShowPart1.Name = "btnShowPart1";
            this.btnShowPart1.Size = new System.Drawing.Size(207, 68);
            this.btnShowPart1.TabIndex = 0;
            this.btnShowPart1.Text = "Show  Form";
            this.btnShowPart1.UseVisualStyleBackColor = true;
            this.btnShowPart1.Click += new System.EventHandler(this.btnShowPart1_Click);
            // 
            // btnShowDialog
            // 
            this.btnShowDialog.Location = new System.Drawing.Point(61, 158);
            this.btnShowDialog.Name = "btnShowDialog";
            this.btnShowDialog.Size = new System.Drawing.Size(207, 68);
            this.btnShowDialog.TabIndex = 1;
            this.btnShowDialog.Text = "Show  Form Dialog";
            this.btnShowDialog.UseVisualStyleBackColor = true;
            this.btnShowDialog.Click += new System.EventHandler(this.button1_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(358, 58);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(207, 68);
            this.button1.TabIndex = 2;
            this.button1.Text = "Show Message Box Form";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.btnShowDialog);
            this.Controls.Add(this.btnShowPart1);
            this.Name = "frmMain";
            this.Text = "Main Form";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnShowPart1;
        private System.Windows.Forms.Button btnShowDialog;
        private System.Windows.Forms.Button button1;
    }
}